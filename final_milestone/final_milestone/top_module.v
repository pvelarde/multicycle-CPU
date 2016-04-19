`timescale 1ns / 1ps

module top_module(clock, reset, alu_output);
input clock;
input reset;
output [31:0] alu_output;

wire wire_pc_write, wire_branch, wire_pc_source, wire_reg_write, wire_mem_to_reg, wire_reg_dest, wire_i_or_d, wire_mem_write, wire_alu_src_a, wire_ir_write;
wire [1:0] wire_alu_src_b;
wire [2:0] wire_alu_control;
wire [5:0] wire_opcode;
Datapath datapath(
    .ALU_output(alu_output),
    .opcode(wire_opcode),
    .Clock(clock),
    .Reset(reset),
    .PC_write(wire_pc_write),
    .Branch(wire_branch),
    .PC_src(wire_pc_source),
    .Reg_write(wire_reg_write),
    .Mem_to_reg(wire_mem_to_reg),
    .Reg_dst(wire_reg_dest),
    .IorD(0),
    .Mem_write(wire_mem_write),
    .IR_write(wire_ir_write),
    .ALU_src_a(wire_alu_src_a),
    .ALU_src_b(wire_alu_src_b),
    .ALU_control(wire_alu_control)
    );

finiteStateMachine control(
    .opcode(wire_opcode),
    .op_function(0),
    .clk(clock),
    .reset(reset),
    .O_PC_WRITE(wire_pc_write),
    .O_BRANCH(wire_branch),
    .O_ALU_SRC_A(wire_alu_src_a),
    .O_REG_FILE_ENABLE(wire_reg_write),
    .O_INSTRUCTION_OR_DATA(0),
    .O_MEM_ENABLE(wire_mem_write),
    .O_REG_DEST(wire_reg_dest),
    .O_MEM_TO_REG(wire_mem_to_reg),
    .O_PC_SRC(wire_pc_source),
    .O_ALU_SRC_B(wire_alu_src_b),
    .O_ALU_CONTROL(wire_alu_control),
    .O_IR_WRITE(wire_ir_write)
    );



endmodule
