`timescale 1ns / 1ns

module test_finiteStateMachine;

	// Inputs
	reg [5:0] opcode;
	reg [5:0] op_function;
	reg clk;
	reg reset;

	// Outputs
	wire O_PC_WRITE;
	wire O_BRANCH;
	wire O_ALU_SRC_A;
	wire O_REG_FILE_ENABLE;
	wire O_INSTRUCTION_OR_DATA;
	wire O_MEM_ENABLE;
	wire O_REG_DEST;
	wire O_MEM_TO_REG;
	wire [1:0] O_PC_SRC;
	wire [1:0] O_ALU_SRC_B;
	wire [3:0] O_ALU_CONTROL;
	wire O_IR_WRITE;

	// Instantiate the Unit Under Test (UUT)
	finiteStateMachine uut (
		.opcode(opcode),
		.op_function(op_function),
		.clk(clk),
		.reset(reset),
		.O_PC_WRITE(O_PC_WRITE),
		.O_BRANCH(O_BRANCH),
		.O_ALU_SRC_A(O_ALU_SRC_A),
		.O_REG_FILE_ENABLE(O_REG_FILE_ENABLE),
		.O_INSTRUCTION_OR_DATA(O_INSTRUCTION_OR_DATA),
		.O_MEM_ENABLE(O_MEM_ENABLE),
		.O_REG_DEST(O_REG_DEST),
		.O_MEM_TO_REG(O_MEM_TO_REG),
		.O_PC_SRC(O_PC_SRC),
		.O_ALU_SRC_B(O_ALU_SRC_B),
		.O_ALU_CONTROL(O_ALU_CONTROL),
		.O_IR_WRITE(O_IR_WRITE)
	);

	initial begin
		// Initialize Inputs

		$display ("time\tclk\treset\t\topcode\t\top_function");
		$monitor ("%g\t%b\t%b\t\t%b\t\t%b",
					 $time, clk, reset, opcode, op_function);

		opcode = 0;
		op_function = 0;
		clk = 0;
		reset = 0;

		#100;
		// Reset the FSM.  Should go into S_IDLE= 3'b000 state, and output O_NOTHING= 6'b100000.
		#5; clk= 1; reset= 1;
		#5; clk= 0; reset= 0;
		// NOOP = 000000
		#5;
		opcode = 6'b000000;
		clk= 0;
		reset= 0;
		#5; clk= 1; // fetch
		#5; clk= 0;
		#5; clk= 1; // decodes
		#5; clk= 0;
		#5; clk= 1; // branch
		#5; clk= 0;

		// MOV = 010000
		#5; clk= 0; reset= 0;
		opcode = 6'b010000;
		#5; clk= 1; // fetch
		#5; clk= 0;
		#5; clk= 1; // decode
		#5; clk= 0;
		#5; clk= 1; // execute
		#5; clk= 0;
		#5; clk= 1; // alu_writeback
		#5; clk= 0;
	   
		// TESTING OP_SUB    = 6'b010011;
		#5;
		opcode = 6'b010011;
		clk= 0;
		reset= 0;
		#5; clk= 1; // fetch
		#5; clk= 0;
		#5; clk= 1; // decode
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;

		// TESTING OP_SUB    = 6'b010011;
		#5;
		opcode = 6'b010011;
		clk= 0;
		reset= 0;
		#5; clk= 1; // fetch
		#5; clk= 0;
		#5; clk= 1; // decode
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;

		// TESTING OP_OR     = 6'b010100;
		#5;
		opcode = 6'b010100;
		clk= 0;
		reset= 0;
		#5; clk= 1; // fetch
		#5; clk= 0;
		#5; clk= 1; // decode
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;

		// TESTING OP_AND    = 6'b010101;
		#5;
		opcode = 6'b010101;
		clk= 0;
		reset= 0;
		#5; clk= 1; // fetch
		#5; clk= 0;
		#5; clk= 1; // decode
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;

		// TESTING OP_XOR    = 6'b010110;
		#5;
		opcode = 6'b010110;
		clk= 0;
		reset= 0;
		#5; clk= 1; // fetch
		#5; clk= 0;
		#5; clk= 1; // decode
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;

		// TESTING OP_SLT    = 6'b010111;
		#5;
		opcode = 6'b010111;
		clk= 0;
		reset= 0;
		#5; clk= 1; // fetch
		#5; clk= 0;
		#5; clk= 1; // decode
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;

		// TESTING OP_J      = 6'b000001;
		#5;
		opcode = 6'b000001;
		clk= 0;
		reset= 0;
		#5; clk= 1; // fetch
		#5; clk= 0;
		#5; clk= 1; // decode
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;

		// TESTING OP_BNE    = 6'b100001;
		#5;
		opcode = 6'b100001;
		clk= 0;
		reset= 0;
		#5; clk= 1; // fetch
		#5; clk= 0;
		#5; clk= 1; // decode
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;

		// TESTING OP_ADDI   = 6'b110010;
		#5;
		opcode = 6'b110010;
		clk= 0;
		reset= 0;
		#5; clk= 1; // fetch
		#5; clk= 0;
		#5; clk= 1; // decode
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;

		// TESTING OP_SUBI   = 6'b110011;
		#5;
		opcode = 6'b110011;
		clk= 0;
		reset= 0;
		#5; clk= 1; // fetch
		#5; clk= 0;
		#5; clk= 1; // decode
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;

		// TESTING OP_ORI    = 6'b110100;
		#5;
		opcode = 6'b110100;
		clk= 0;
		reset= 0;
		#5; clk= 1; // fetch
		#5; clk= 0;
		#5; clk= 1; // decode
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;

		// TESTING OP_ANDI   = 6'b110101;
		#5;
		opcode = 6'b110101;
		clk= 0;
		reset= 0;
		#5; clk= 1; // fetch
		#5; clk= 0;
		#5; clk= 1; // decode
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;

		// TESTING OP_XORI   = 6'b110110;
		#5;
		opcode = 6'b110110;
		clk= 0;
		reset= 0;
		#5; clk= 1; // fetch
		#5; clk= 0;
		#5; clk= 1; // decode
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;

		// TESTING OP_SLTI   = 6'b110111;
		#5;
		opcode = 6'b110111;
		clk= 0;
		reset= 0;
		#5; clk= 1; // fetch
		#5; clk= 0;
		#5; clk= 1; // decode
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;

		// TESTING OP_LI     = 6'b111001;
		#5;
		opcode = 6'b111001;
		clk= 0;
		reset= 0;
		#5; clk= 1; // fetch
		#5; clk= 0;
		#5; clk= 1; // decode
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;

		// TESTING OP_LWI    = 6'b111011;
		#5;
		opcode = 6'b111011;
		clk= 0;
		reset= 0;
		#5; clk= 1; // fetch
		#5; clk= 0;
		#5; clk= 1; // decode
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;

		// TESTING OP_SWI    = 6'b111100;
		#5;
		opcode = 6'b111100;
		clk= 0;
		reset= 0;
		#5; clk= 1; // fetch
		#5; clk= 0;
		#5; clk= 1; // decode
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;
		#5; clk= 1;
		#5; clk= 0;


		#100;
	end

endmodule
