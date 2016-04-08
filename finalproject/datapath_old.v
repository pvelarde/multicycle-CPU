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
// input regA_mux, PCwritecond
// input [1:0] Load

/*
input clock, reset,IRwrite,MemWrite,MemtoReg,RegWrite,PCwrite,PCwritecond,RegDst,branch,regA_mux;//added branch control
input [3:0] ALUop;
input [1:0] PCsource, Load;
input [1:0] ALUsrcB,ALUsrcA;
wire [31:0] Instruc_out;
wire [15:0] PC;
wire [15:0] imm;
wire [5:0] op_out;
wire [4:0] readA,readB,write_reg_mux,RegisterA_mux ; //output from instruction register
wire [31:0] ALUout;
wire [31:0] Mux_to_PC,zero_Extension,sign_Extension;
wire [31:0] Mux_aluA,Mux_aluB;
wire zero_line,andout,zero_invert,Mux_PCbranch;
wire [31:0] write_data_mux;
wire [31:0] output_regB,output_regA,in_regB,in_regA,Mem_data;
wire [31:0] Extended_jump,MemData_reg_out;
wire [25:0] Jump_to_mux;
wire [31:0] ALU_reg_out;
wire [15:0] data_mem_mux;
output [5:0] out;
*/



// WIRES
wire [31:0] pc_to_instruction_memory;
wire pc_enable;
wire [31:0] instruction_to_IR;
wire [31:0] IR_output;
wire [31:0] write_data_mux;

// Fetch instruction

nbit_reg #.DATA_WIDTH(w) pc_reg(
    .nD(instruction),
    .nQ(pc_to_instruction_memory),
    .Write(pc_enable),
    .Reset(reset),
    .Clk(clk)
    );

IMem I_Memory(
    .PC(pc_to_instruction_memory),
    .Instruction(instruction_to_IR));

DMem D_Memory(
    .WriteData(,   // Input data into the memory
            MemData,     // Output data from the memory
            Address,     // Address of data to be read/written
            MemWrite,    // When high, causes write to take place on posedge
            Clk);        // Clock


nbit_reg #.DATA_WIDTH(w) instruction_reg(
    .nD(instruction_to_IR),
    .nQ(IR_output),
    .Write(ir_write),
    .Reset(reset),
    .Clk(clk)
    );

// write data MUX
assign write_data_mux = (mem_to_reg) ? MemData_reg_out:ALU_reg_out;

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
