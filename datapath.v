`timescale 1ns / 1ps

module datapath();

parameter w = 32;

//INPUTS and OUTPUTS
input clk,reset;
input [31:0] instruction;
input pc_write,ir_write,branch,alu_src_a,reg_file_enable,mem_to_reg,reg_dst,instr_mem_enable,data_mem_enable;
input [1:0] pc_source,alu_src_b;
input [2:0] alu_control;
output [31:0] alu_result;

// WIRES
wire [31:0] pc_to_instruction_memory;
wire pc_enable;
wire [31:0] instruction_to_IR;
wire [31:0] IR_output;

// Fetch instruction

pc_reg #.w(w) nbit_reg(
    .nD(instruction),
    .nQ(pc_to_instruction_memory),
    .Write(pc_enable),
    .Reset(reset),
    .Clk(clk)
    );

I_Memory IMem(
    .PC(pc_to_instruction_memory),
    .Instruction(instruction_to_IR));

instruction_reg #.w(w) nbit_reg(
    .nD(instruction_to_IR),
    .nQ(IR_output),
    .Write(ir_write),
    .Reset(reset),
    .Clk(clk)
    );


endmodule
