`timescale 1ns / 1ns

module test_datapath;

	// Inputs
	reg Clock;
	reg Reset;
	reg PC_write;
	reg Branch;
	reg PC_src;
	reg Reg_write;
	reg Mem_to_reg;
	reg Reg_dst;
	reg IorD;
	reg Mem_write;
	reg IR_write;
	reg [1:0] ALU_src_a;
	reg [1:0] ALU_src_b;
	reg [2:0] ALU_control;

	// Outputs
	wire [31:0] ALU_output;

	// Instantiate the Unit Under Test (UUT)
	Datapath uut (
		.ALU_output(ALU_output), 
		.Clock(Clock), 
		.Reset(Reset), 
		.PC_write(PC_write), 
		.Branch(Branch), 
		.PC_src(PC_src), 
		.Reg_write(Reg_write), 
		.Mem_to_reg(Mem_to_reg), 
		.Reg_dst(Reg_dst), 
		.IorD(IorD), 
		.Mem_write(Mem_write), 
		.IR_write(IR_write), 
		.ALU_src_a(ALU_src_a), 
		.ALU_src_b(ALU_src_b), 
		.ALU_control(ALU_control)
	);

	initial begin
		// log errors 
				
		//$display ("time\tClock\treset\t\topcode\t\top_function");
		//$monitor ("%g\t%b\t%b\t\t%b\t\t%b",
		//$time, Clock, reset, opcode, op_function);

		// Initialize Inputs
		Clock = 0;
		Reset = 0;
		PC_write = 0;
		Branch = 0;
		PC_src = 0;
		Reg_write = 0;
		Mem_to_reg = 0;
		Reg_dst = 0;
		IorD = 0;
		Mem_write = 0;
		IR_write = 0;
		ALU_src_a = 0;
		ALU_src_b = 0;
		ALU_control = 0;
		
		Reset = 1; // RESET HERE
		// Adding immediate
		#20;
		#5; Clock= 0;
		#5; Clock= 1;
		// state 0 fetch
		#5; Clock= 0; 
		#5; Clock= 1;
		Reset = 0; // RESET HERE
		ALU_src_b = 1;
		IR_write = 1;
		PC_write = 1;
		ALU_control = 2;
		//state 1 = decode
		#5; Clock= 0;
		#5; Clock= 1;
		IR_write = 0;
		ALU_src_a = 2;
		ALU_src_b = 3;
		ALU_control = 2;
		IR_write = 0;
		PC_write = 0;
		//state 9 = addi execute
		#5; Clock= 0;
		#5; Clock= 1;
		ALU_src_a = 1;
		ALU_src_b = 2;
		ALU_control = 2;
		//state 10 = addi writeback
		#5; Clock= 0;
		#5; Clock= 1;
		Reg_write = 1;
		Mem_to_reg = 0;
		Reg_dst = 0;
		/*
		// Adding two registers
		#20;
		#5; Clock= 0;
		#5; Clock= 1;
		// state 0 fetch
		#5; Clock= 0; 
		#5; Clock= 1;
		ALU_src_b = 1;
		IR_write = 1;
		PC_write = 1;
		ALU_control = 2;
		//state 1 = decode
		#5; Clock= 0;
		#5; Clock= 1;
		ALU_src_b = 3;
		ALU_control = 2;
		IR_write = 0;
		PC_write = 0;
		// state 6 execute
		#5; Clock= 0;
		#5; Clock= 1;
		ALU_src_a = 1;
		ALU_src_b = 0;
		ALU_control = 2;
		// state 7 writeback
		#5; Clock= 0;
		#5; Clock= 1;
		Reg_dst = 1;
		Mem_to_reg = 0;
		Reg_write = 1;
		ALU_src_a = 0;
		ALU_src_b = 0;
		ALU_control = 0;
		#5; Clock= 0;
		#5; Clock= 1;
		*/
		#100;
		// Add stimulus here

	end
      
endmodule

