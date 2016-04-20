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
    input [3:0] op_code;
    output reg [31:0] out;
    output zero;

    assign zero = ( a - b == 0 )? 1: 0;
    always @ (a,b,op_code)
        begin
            case(op_code)
                    4'b0000: out <= a;                   //move
                    4'b0001: out <= ~a;                  //negate
                    4'b0010: out <= a + b;               //addition
                    4'b0011: out <= a - b;               //subtract
                    4'b0100: out <= a | b;               //or
                    4'b0101: out <= a & b;               //and
						  4'b0110: out <= a ^ b;						//xor
						  4'b0111: begin                       //set less than
								if(a < b) out <= 1;
                        else out <=0;
                    end
						  4'b1001: out <= b;							// for load immediate
						  4'b1011: out <= b;							// for load word immediate
						  4'b1100: out <= b;							// for store word immediate
                    default: out <= 0;              //empty
            endcase
        end

endmodule
