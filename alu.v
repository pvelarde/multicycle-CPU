`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    19:23:54 3/18/2016
// Design Name:
// Module Name:    alu
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
module alu(out, zero, a, b, op_code);
    input [31:0] a,b;
    input [2:0] op_code;
    output reg [31:0] out;
    output zero;

    assign zero = ( a - b == 0 )? 1: 0;
    always @ (a,b,op_code)
        begin
            case(op_code)
                    3'b000: out <= a;                   //move
                    3'b001: out <= ~a;                  //negate
                    3'b010: out <= a + b;               //addition
                    3'b011: out <= a - b;               //subtract
                    3'b100: out <= a | b;               //or
                    3'b101: out <= a & b;               //and
                    3'b110: begin                       //shift left
                                if(a < b) out <= 1;
                                else out <=0;
                            end
                    default: out <= 0;              //empty
            endcase
        end

endmodule
