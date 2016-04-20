`timescale 1ns / 1ns

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:42:34 04/19/2016
// Design Name:   top_module
// Module Name:   /ad/eng/users/p/v/pvelarde/Desktop/final_project/final_milestone/final_milestone/test_top_module.v
// Project Name:  final_milestone
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top_module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_top_module;

	// Inputs
	reg clock;
	reg reset;

	// Outputs
	wire [31:0] alu_output;

	// Instantiate the Unit Under Test (UUT)
	top_module uut (
		.clock(clock), 
		.reset(reset), 
		.alu_output(alu_output)
	);

	always #10 clock = ~clock;

	initial begin
		// Initialize Inputs
		clock = 0;
		reset = 1;

		// Wait 100 ns for global reset to finish
		#100;
		reset = 0;
        
		// Add stimulus here

	end
      
endmodule

