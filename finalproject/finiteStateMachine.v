`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:36:58 03/29/2016 
// Design Name: 
// Module Name:    finiteStateMachine 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module finiteStateMachine(
    );
	 //dan u suck
	input clk, reset;
	input [5:0] opcode;
	input [5:0] op_function;
	//make sure i didnt forget any of the control lines
	output pc_write,branch,alu_src_a,reg_file_enable,i_or_d,mem_enable,reg_dst,mem_to_reg;
	output [1:0] pc_src,alu_src_b,
	output [3:0] alu_control;
endmodule
