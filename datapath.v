module Datapath();

// INPUTS
input Clock, PC_write, Branch, PC_src, Reg_write, Mem_to_reg, Reg_dst, IorD, Mem_write, IR_write;
input ALU_src_a;
input [1:0] ALU_src_b;
input [2:0] ALU_control;

// WIRES
wire branch_and_out, ALU_zero, PC_enable;
wire [15:0] next_pc_to_pc_reg, pc_reg_output;
wire [31:0] instruction_out, instruction_reg_out;
// instruction register wires
wire [15:0] immediate;
wire [4:0] wire_reg_file_in_a, wire_reg_file_in_b, write_to_reg_file;
wire [5:0] op_out; // op_out to the control
// register file wires
wire [31:0] mux_write_data; // input to register file
wire [31:0] wire_to_register_a, wire_to_register_b; // outputs from register file


and branch_and_gate(branch_and_out, ALU_zero, Branch);
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
nbit_register #(16) reg_pc(next_pc_to_pc_reg, pc_reg_output, PC_enable, Reset, Clock);

// Instruction Memory
IMem instruction_memory(pc_reg_output, instruction_out);

// Instruction register
instruction_register instruction_register(op_out, wire_reg_file_in_a, wire_reg_file_in_b, immediate, IR_write, instruction_out, Clock, Reset);

// Register file
nbit_register #(32) reg_register_file_a (reg_file_out_a, wire_to_register_a, 1, Reset, Clock);
nbit_register #(32) reg_register_file_b (reg_file_out_a, wire_to_register_a, 1, Reset, Clock);

nbit_register_file #(32) register_file(mux_write_data, wire_to_register_a, wire_to_register_b, wire_reg_file_in_a, wire_reg_file_in_b, write_to_reg_file, Reg_write, Clock);





