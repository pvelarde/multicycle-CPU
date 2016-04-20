`timescale 1ns / 1ns

module Datapath(ALU_output, opcode ,Clock, Reset, PC_write, Branch, PC_src, Reg_write, Mem_to_reg, Reg_dst, IorD, Mem_write, IR_write,ALU_src_a, ALU_src_b,ALU_control );

// INPUTS
input Clock, Reset, PC_write, Branch, Reg_write, Mem_to_reg, Reg_dst, IorD, Mem_write, IR_write;
input [1:0] ALU_src_a,ALU_src_b, PC_src;
input [3:0] ALU_control;
output [31:0] ALU_output;
output [5:0] opcode;

// WIRES
wire branch_and_out, ALU_zero, PC_enable;
wire [31:0] next_pc_to_pc_reg;
wire [15:0] pc_reg_output;
wire [31:0] instruction_out;
// instruction register wires
wire [15:0] immediate;
wire [4:0] wire_reg_file_in_a, wire_reg_file_in_b, write_to_reg_file;
// register file wires
wire [31:0] mux_write_data; // input to register file
wire [31:0] wire_to_register_a, wire_to_register_b; // outputs from register file
//alu wires
	//alu input wires
wire [31:0] alu_src_a, alu_src_b;
	//alu output wires
wire [31:0] alu_result,alu_reg_out;
//data memory wires
wire [31:0] data_mem_out, to_reg_file_data_mux;
//sign extend wires
wire [31:0] zero_extended_immediate;
wire [31:0] sign_extended_immediate;
and branch_and_gate(branch_and_out, ~ALU_zero, Branch);
or branch_or_gate(PC_enable, branch_and_out, PC_write);

/*
module nbit_reg(
nD,    // Register Input
nQ,    // Register Output
Write, // Only accept input when this is set
Reset, // Synchronous Reset
Clk);  // Clock
*/

//PC register
nbit_register #(.DATA_WIDTH(16)) reg_pc(next_pc_to_pc_reg[15:0], pc_reg_output, PC_enable, Reset, Clock);

// Instruction Memory
IMem instruction_memory(pc_reg_output, instruction_out);

// Instruction register
instruction_register instruction_register1(opcode, wire_reg_file_in_a, wire_reg_file_in_b, immediate, IR_write, instruction_out, Clock, Reset);

// sign extend immediate
assign zero_extended_immediate = {{16{0}}, immediate};
assign sign_extended_immediate = (immediate[15])? {{16'hffff}, immediate} : {{16{0}}, immediate};

//muxes to reg file
assign write_to_reg_file = Reg_dst? immediate[15:11] : wire_reg_file_in_b; // mux that selects what register to write to
assign mux_write_data = Mem_to_reg? to_reg_file_data_mux : alu_reg_out;

// Register file
nbit_register #(.DATA_WIDTH(32)) reg_register_file_a (reg_file_out_a, wire_to_register_a, 1'b1, Reset, Clock);
nbit_register #(.DATA_WIDTH(32)) reg_register_file_b (reg_file_out_b, wire_to_register_b, 1'b1, Reset, Clock);

nbit_register_file #(.data_width(32)) register_file(mux_write_data, wire_to_register_a, wire_to_register_b, wire_reg_file_in_a, wire_reg_file_in_b, write_to_reg_file, Reg_write, Clock);

// data memory
DMem data_memory (wire_to_register_b, data_mem_out, alu_reg_out, Mem_write, Clock);
nbit_register #(.DATA_WIDTH(32)) data_memory_out (data_mem_out, to_reg_file_data_mux, 1, Reset, Clock);

//alu in muxes
assign alu_src_a = (ALU_src_a == 0)? {{16{0}},pc_reg_output[15:0]} : (ALU_src_a == 1)? wire_to_register_a : 0;
assign alu_src_b = (ALU_src_b == 0)? wire_to_register_b : (ALU_src_b == 1)? 1 : (ALU_src_b == 2)? sign_extended_immediate: zero_extended_immediate;

// alu
alu ALU (alu_result, ALU_zero, alu_src_a, alu_src_b, ALU_control);

assign next_pc_to_pc_reg = (PC_src == 0) ? alu_result : (PC_src == 1) ? alu_reg_out : immediate;
assign ALU_output = alu_result;

//alu out register
nbit_register #(.DATA_WIDTH(32)) reg_alu_out (alu_result, alu_reg_out, 1, Reset, Clock);

endmodule






