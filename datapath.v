`timescale 1ns / 1ps

module datapath();

parameter w = 32;

//INPUTS and OUTPUTS
input clk,reset;
input [31:0] instruction;
input pc_write, ir_write, branch, alu_src_a, reg_file_enable, mem_to_reg, reg_dst, instr_mem_enable, data_mem_enable;
input [1:0] pc_source,alu_src_b;
input [2:0] alu_control;
output [31:0] alu_result;

// WIRES
wire [31:0] pc_to_instruction_memory;
wire pc_enable;
wire [31:0] instruction_to_IR;
wire [31:0] IR_output;

// Fetch instruction

nbit_reg #.DATA_WIDTH(w) pc_reg(
    .nD(instruction),
    .nQ(pc_to_instruction_memory),
    .Write(pc_enable),
    .Reset(reset),
    .Clk(clk)
    );

I_Memory IMem(
    .PC(pc_to_instruction_memory),
    .Instruction(instruction_to_IR));

nbit_reg #.DATA_WIDTH(w) instruction_reg(
    .nD(instruction_to_IR),
    .nQ(IR_output),
    .Write(ir_write),
    .Reset(reset),
    .Clk(clk)
    );

// write data MUX
nbit_mux #.SELECT_WIDTH(1) mux_write_to_register_file (
    .MuxIn,   // Mux input: 2^SELECT_WID TH bits.
    .MuxOut,  // Mux output: 1 bit.
    .MuxSel); // Mux select lines: SELECT_WIDTH bits.

nbit_register_file #.w(w) register_file(
    .write_data(,
    .read_data_1,
    .read_data_2,
    .read_sel_1,
    .read_sel_2,
    .write_address,
    .RegWrite(reg_file_enable),
    .clk(clk));


endmodule
