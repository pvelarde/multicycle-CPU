`timescale 1ns / 1ps
module instruction_register(op_out, reg1, reg2, imm, IR_write, Instruc_in, clk, reset);
input [31:0] Instruc_in;
input clk, reset,IR_write;

output [5:0] op_out;
output [4:0]reg1, reg2;
output [15:0] imm;

reg [5:0]op_code;
reg [4:0] read1,read2;
reg [15:0]IMM;

assign op_out = op_code;
assign reg1 = read1;
assign reg2 = read2;
assign imm = IMM;

always@ (posedge clk)
    begin
    if (reset)
        begin
        read1 <= 5'd0;
        read2 <= 5'd0;
        IMM <= 16'd0;
        op_code <=6'd0;

        end

    else if(IR_write ==1)
        begin
        op_code<=Instruc_in[31:26];
        read1 <= Instruc_in[25:21];
        read2 <= Instruc_in[20:16];
        IMM <= Instruc_in[15:0];
        end
    else
        begin // OR leave blank.
        op_code <= op_out;
        read1 <= reg1;
        read2 <= reg2;
        IMM <= imm;
        end

    end
endmodule
