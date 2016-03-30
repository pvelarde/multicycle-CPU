`timescale 1ns / 1ps

module finiteStateMachine(
    // INPUTS
    opcode
    op_function,
    clk,
    reset,
    // OUTPUTS
    O_PC_WRITE,
    O_BRANCH,
    O_ALU_SRC_A,
    O_REG_FILE_ENABLE,
    O_INSTRUCTION_OR_DATA,
    O_MEM_ENABLE,
    O_REG_DEST,
    O_MEM_TO_REG,
    O_PC_SRC,
    O_ALU_SRC_B,
    O_ALU_CONTROL,
    O_IR_WRITE
    );

//--- Size Parameteers ---
parameter STATE_SIZE    = 4;
parameter OP_CODE_SIZE  = 6;

//--- ALU Codes ---
parameter ALU_ADD           = 0;
parameter ALU_SUB           = 1;
parameter ALU_NOT           = 2;
parameter ALU_OR            = 3;
parameter ALU_AND           = 4;
parameter ALU_XOR           = 5;
parameter ALU_SLT           = 6;

//--- OPcode Parameteers ---
parameter OP_NOOP       = 6'b000000;
//--- R-type Intructions ---
parameter OP_MOV        = 6'b010000;
parameter OP_NOT        = 6'b010001;
parameter OP_ADD        = 6'b010010;
parameter OP_SUB        = 6'b010011;
parameter OP_OR         = 6'b010100;
parameter OP_AND        = 6'b010101;
parameter OP_XOR        = 6'b010110;
parameter OP_SLT        = 6'b010111;
//--- J-type Intructions ---
parameter OP_J          = 6'b000001;
parameter OP_BNE        = 6'b100001;
//--- I-type Instructions ---
parameter OP_ADDI       = 6'b110010;
parameter OP_SUBI       = 6'b110011;
parameter OP_ORI        = 6'b110100;
parameter OP_ANDI       = 6'b110101;
parameter OP_XORI       = 6'b110110;
parameter OP_SLTI       = 6'b110111;
parameter OP_LI         = 6'b111001;
parameter OP_LWI        = 6'b111011;
parameter OP_SWI        = 6'b111100;

//--- State parameters ---
parameter S_FETCH           = 0;
parameter S_DECODE          = 1;
parameter S_MEM_ADR         = 2;
parameter S_MEM_READ        = 3;
parameter S_MEM_WRITEBACK   = 4;
parameter S_MEM_WRITE       = 5;
parameter S_EXECUTE         = 6;
parameter S_ALU_WRITEBACK   = 7;
parameter S_BRANCH          = 8;
parameter S_ADDI_EXECUTE    = 9;
parameter S_ADDI_WRITEBACK  = 10;
parameter S_JUMP            = 11;

//-------------Input Ports-----------------------------
input clk, reset;
input [5:0] opcode;
input [5:0] op_function;
//-------------Output Ports----------------------------
output O_PC_WRITE, O_BRANCH, O_ALU_SRC_A, O_REG_FILE_ENABLE, O_INSTRUCTION_OR_DATA, O_MEM_ENABLE, O_REG_DEST, O_MEM_TO_REG, O_IR_WRITE;
output [1:0] O_PC_SRC, O_ALU_SRC_B;
output [3:0] O_ALU_CONTROL;
//-------------Internal Variables-----------------------------
reg [STATE_SIZE-1:0] current_state;
wire [STATE_SIZE-1:0] next_state;


//-------------States Logic -----------------------------
assign next_state = nextstate_func(current_state, opcode);
function [STATE_SIZE-1:0] nextstate_func;
input [STATE_SIZE-1:0]  S; // current state
input [OP_CODE_SIZE-1:0]  OP; // OP Code
begin

// Next state logic
case(S)
    S_FETCH:
        case(OP)
            default: nextstate_func = S_DECODE;
        endcase
    S_DECODE:
        case(OP)
            OP_NOOP:        nextstate_func = S_BRANCH;
            OP_MOV:         nextstate_func = S_EXECUTE;
            OP_NOT:         nextstate_func = S_EXECUTE;
            OP_ADD:         nextstate_func = S_EXECUTE;
            OP_SUB:         nextstate_func = S_EXECUTE;
            OP_OR:          nextstate_func = S_EXECUTE;
            OP_AND:         nextstate_func = S_EXECUTE;
            OP_XOR:         nextstate_func = S_EXECUTE;
            OP_SLT:         nextstate_func = S_EXECUTE;
            OP_J:           nextstate_func = S_JUMP;
            OP_BNE:         nextstate_func = S_BRANCH;
            OP_ADDI:        nextstate_func = S_ADDI_EXECUTE;
            OP_SUBI:        nextstate_func = S_ADDI_EXECUTE;
            OP_ORI:         nextstate_func = S_ADDI_EXECUTE;
            OP_ANDI:        nextstate_func = S_ADDI_EXECUTE;
            OP_XORI:        nextstate_func = S_ADDI_EXECUTE;
            OP_SLTI:        nextstate_func = S_ADDI_EXECUTE;
            OP_LI:          nextstate_func = S_ADDI_EXECUTE;
            OP_LWI:         nextstate_func = S_MEM_ADR;
            OP_SWI:         nextstate_func = S_MEM_ADR;
            default:        nextstate_func = S_FETCH;
        endcase
    S_MEM_ADR:
        case(OP)
            OP_LWI:         nextstate_func = S_MEM_READ;
            OP_SWI:         nextstate_func = S_MEM_WRITE;
            default:        nextstate_func = S_FETCH;
        endcase
    S_MEM_READ:
        case(OP)
            OP_LWI:         nextstate_func = S_MEM_WRITEBACK;
            default:        nextstate_func = S_FETCH;
        endcase
    S_MEM_WRITEBACK:
        case(OP)
            OP_LWI:         nextstate_func = S_FETCH;
            default:        nextstate_func = S_FETCH;
        endcase
    S_MEM_WRITE:
        case(OP)
            OP_SWI:         nextstate_func = S_FETCH;
            default:        nextstate_func = S_FETCH;
        endcase
    S_EXECUTE:
        case(OP)
            OP_MOV:         nextstate_func = S_ALU_WRITEBACK;
            OP_NOT:         nextstate_func = S_ALU_WRITEBACK;
            OP_ADD:         nextstate_func = S_ALU_WRITEBACK;
            OP_SUB:         nextstate_func = S_ALU_WRITEBACK;
            OP_OR:          nextstate_func = S_ALU_WRITEBACK;
            OP_AND:         nextstate_func = S_ALU_WRITEBACK;
            OP_XOR:         nextstate_func = S_ALU_WRITEBACK;
            OP_SLT:         nextstate_func = S_ALU_WRITEBACK;
            default:        nextstate_func = S_FETCH;
        endcase
    S_ALU_WRITEBACK:
        case(OP)
            OP_MOV:         nextstate_func = S_FETCH;
            OP_NOT:         nextstate_func = S_FETCH;
            OP_ADD:         nextstate_func = S_FETCH;
            OP_SUB:         nextstate_func = S_FETCH;
            OP_OR:          nextstate_func = S_FETCH;
            OP_AND:         nextstate_func = S_FETCH;
            OP_XOR:         nextstate_func = S_FETCH;
            OP_SLT:         nextstate_func = S_FETCH;
            default:        nextstate_func = S_FETCH;
        endcase
    S_BRANCH:
        case(OP)
            OP_NOOP:        nextstate_func = S_FETCH;
            OP_BNE:         nextstate_func = S_FETCH;
            default:        nextstate_func = S_FETCH;
        endcase
    S_ADDI_EXECUTE:
        case(OP)
            OP_ADDI:        nextstate_func = S_ADDI_WRITEBACK;
            OP_SUBI:        nextstate_func = S_ADDI_WRITEBACK;
            OP_ORI:         nextstate_func = S_ADDI_WRITEBACK;
            OP_ANDI:        nextstate_func = S_ADDI_WRITEBACK;
            OP_XORI:        nextstate_func = S_ADDI_WRITEBACK;
            OP_SLTI:        nextstate_func = S_ADDI_WRITEBACK;
            OP_LI:          nextstate_func = S_ADDI_WRITEBACK;
            default:        nextstate_func = S_FETCH;
        endcase
    S_ADDI_WRITEBACK:
        case(OP)
            OP_ADDI:        nextstate_func = S_FETCH;
            OP_SUBI:        nextstate_func = S_FETCH;
            OP_ORI:         nextstate_func = S_FETCH;
            OP_ANDI:        nextstate_func = S_FETCH;
            OP_XORI:        nextstate_func = S_FETCH;
            OP_SLTI:        nextstate_func = S_FETCH;
            OP_LI:          nextstate_func = S_FETCH;
            default:        nextstate_func = S_FETCH;
        endcase
    S_JUMP:
        case(OP)
            OP_J:           nextstate_func = S_FETCH;
            default:        nextstate_func = S_FETCH;
        endcase
    default:            nextstate_func = S_FETCH;
endcase
end
endfunction


//-------------Output Logic -----------------------------


always @ (current_state or reset)
begin : OUTPUT_LOGIC
    if (reset == 1`b1) begin
        O_PC_WRITE: 1;
        O_BRANCH: 0;
        O_ALU_SRC_A: 0;
        O_REG_FILE_ENABLE: 0;
        O_INSTRUCTION_OR_DATA: 0;
        O_MEM_ENABLE: 0;
        O_REG_DEST: 0;
        O_MEM_TO_REG: 0;
        O_PC_SRC: 0;
        O_ALU_SRC_B: 1; //adding 4 to PC
        O_ALU_CONTROL: ALU_ADD;
        O_IR_WRITE: 1;
    end
    else begin
        case(current_state)
            S_FETCH:
                begin
                    O_PC_WRITE: 1;
                    O_BRANCH: 0;
                    O_ALU_SRC_A: 0;
                    O_REG_FILE_ENABLE: 0;
                    O_INSTRUCTION_OR_DATA: 0;
                    O_MEM_ENABLE: 0;
                    O_REG_DEST: 0;
                    O_MEM_TO_REG: 0;
                    O_PC_SRC: 0;
                    O_ALU_SRC_B: 1;
                    O_ALU_CONTROL: ALU_ADD;
                    O_IR_WRITE: 1;
                end
            S_DECODE:
                begin
                    O_PC_WRITE: 0;
                    O_BRANCH: 0;
                    O_ALU_SRC_A: 0;
                    O_REG_FILE_ENABLE: 0;
                    O_INSTRUCTION_OR_DATA: 0;
                    O_MEM_ENABLE: 0;
                    O_REG_DEST: 0;
                    O_MEM_TO_REG: 0;
                    O_PC_SRC: 0;
                    O_ALU_SRC_B: 3;
                    O_ALU_CONTROL: ALU_ADD;
                    O_IR_WRITE: 0;
                end
            S_MEM_ADR:
                begin
                    O_PC_WRITE: 0;
                    O_BRANCH: 0;
                    O_ALU_SRC_A: 1;
                    O_REG_FILE_ENABLE: 0;
                    O_INSTRUCTION_OR_DATA: 0;
                    O_MEM_ENABLE: 0;
                    O_REG_DEST: 0;
                    O_MEM_TO_REG: 0;
                    O_PC_SRC: 0;
                    O_ALU_SRC_B: 2;
                    O_ALU_CONTROL: ALU_ADD;
                    O_IR_WRITE: 0;
                end
            S_MEM_READ:
                begin
                    O_PC_WRITE: 0;
                    O_BRANCH: 0;
                    O_ALU_SRC_A: 0;
                    O_REG_FILE_ENABLE: 0;
                    O_INSTRUCTION_OR_DATA: 1;
                    O_MEM_ENABLE: 0;
                    O_REG_DEST: 0;
                    O_MEM_TO_REG: 0;
                    O_PC_SRC: 0;
                    O_ALU_SRC_B: 0;
                    O_ALU_CONTROL: 0;
                    O_IR_WRITE: 0;
                end
            S_MEM_WRITEBACK:
                begin
                    O_PC_WRITE: 0;
                    O_BRANCH: 0;
                    O_ALU_SRC_A: 0;
                    O_REG_FILE_ENABLE: 1;
                    O_INSTRUCTION_OR_DATA: 0;
                    O_MEM_ENABLE: 0;
                    O_REG_DEST: 0;
                    O_MEM_TO_REG: 1;
                    O_PC_SRC: 0;
                    O_ALU_SRC_B: 0;
                    O_ALU_CONTROL: ALU_ADD;
                    O_IR_WRITE: 0;
                end
            S_MEM_WRITE:
                begin
                    O_PC_WRITE: 0;
                    O_BRANCH: 0;
                    O_ALU_SRC_A: 0;
                    O_REG_FILE_ENABLE: 0;
                    O_INSTRUCTION_OR_DATA: 1;
                    O_MEM_ENABLE: 1;
                    O_REG_DEST: 0;
                    O_MEM_TO_REG: 0;
                    O_PC_SRC: 0;
                    O_ALU_SRC_B: 0;
                    O_ALU_CONTROL: 0;
                    O_IR_WRITE: 0;
                end
            S_EXECUTE:
                begin
                    O_PC_WRITE: 0;
                    O_BRANCH: 0;
                    O_ALU_SRC_A: 1;
                    O_REG_FILE_ENABLE: 0;
                    O_INSTRUCTION_OR_DATA: 0;
                    O_MEM_ENABLE: 0;
                    O_REG_DEST: 0;
                    O_MEM_TO_REG: 0;
                    O_PC_SRC: 0;
                    O_ALU_SRC_B: 0;
                    O_ALU_CONTROL: opcode[3:0];
                    O_IR_WRITE: 0;
                end
            S_ALU_WRITEBACK:
                begin
                    O_PC_WRITE: 0;
                    O_BRANCH: 0;
                    O_ALU_SRC_A: 0;
                    O_REG_FILE_ENABLE: 1;
                    O_INSTRUCTION_OR_DATA: 0;
                    O_MEM_ENABLE: 0;
                    O_REG_DEST: 1;
                    O_MEM_TO_REG: 0;
                    O_PC_SRC: 0;
                    O_ALU_SRC_B: 0;
                    O_ALU_CONTROL: 0;
                    O_IR_WRITE: 0;
                end
            S_BRANCH:
                begin
                    O_PC_WRITE: 0;
                    O_BRANCH: 1;
                    O_ALU_SRC_A: 1;
                    O_REG_FILE_ENABLE: 0;
                    O_INSTRUCTION_OR_DATA: 0;
                    O_MEM_ENABLE: 0;
                    O_REG_DEST: 0;
                    O_MEM_TO_REG: 0;
                    O_PC_SRC: 1;
                    O_ALU_SRC_B: 0;
                    O_ALU_CONTROL: ALU_SUB;
                    O_IR_WRITE: 0;
                end
            S_ADDI_EXECUTE:
                begin
                    O_PC_WRITE: 0;
                    O_BRANCH: 0;
                    O_ALU_SRC_A: 1;
                    O_REG_FILE_ENABLE: 0;
                    O_INSTRUCTION_OR_DATA: 0;
                    O_MEM_ENABLE: 0;
                    O_REG_DEST: 0;
                    O_MEM_TO_REG: 0;
                    O_PC_SRC: 0;
                    O_ALU_SRC_B: 2;
                    O_ALU_CONTROL: ADD_SUB;
                    O_IR_WRITE: 0;
                end
            S_ADDI_WRITEBACK:
                begin
                    O_PC_WRITE: 0;
                    O_BRANCH: 0;
                    O_ALU_SRC_A: 0;
                    O_REG_FILE_ENABLE: 1;
                    O_INSTRUCTION_OR_DATA: 0;
                    O_MEM_ENABLE: 0;
                    O_REG_DEST: 0;
                    O_MEM_TO_REG: 0;
                    O_PC_SRC: 0;
                    O_ALU_SRC_B: 0;
                    O_ALU_CONTROL: 0;
                    O_IR_WRITE: 0;
                end
            S_JUMP:
                begin
                    O_PC_WRITE: 1;
                    O_BRANCH: 0;
                    O_ALU_SRC_A: 0;
                    O_REG_FILE_ENABLE: 0;
                    O_INSTRUCTION_OR_DATA: 0;
                    O_MEM_ENABLE: 0;
                    O_REG_DEST: 0;
                    O_MEM_TO_REG: 0;
                    O_PC_SRC: 2;
                    O_ALU_SRC_B: 0;
                    O_ALU_CONTROL: 0;
                    O_IR_WRITE: 0;
                end
            default:
                begin
                    O_PC_WRITE: 1;
                    O_BRANCH: 0;
                    O_ALU_SRC_A: 0;
                    O_REG_FILE_ENABLE: 0;
                    O_INSTRUCTION_OR_DATA: 0;
                    O_MEM_ENABLE: 0;
                    O_REG_DEST: 0;
                    O_MEM_TO_REG: 0;
                    O_PC_SRC: 0;
                    O_ALU_SRC_B: 1;
                    O_ALU_CONTROL: ALU_ADD;
                    O_IR_WRITE: 1;
                end
        endcase
    end
end

// ================= Sequential Logic =================
always @ (posedge clk)
begin: FSM_SEQ
    if (reset == 1) begin
        current_state <= S_FETCH
    end else begin
        current_state <= next_state;
    end
end

`ifdef DEBUG_PRINTOUTS_ENABLED
    case(next_state)
        S_FETCH :           $display("Current state: S_FETCH");
        S_DECODE :          $display("Current state: S_DECODE");
        S_MEM_ADR :         $display("Current state: S_MEM_ADR");
        S_MEM_READ :        $display("Current state: S_MEM_READ");
        S_MEM_WRITEBACK :   $display("Current state: S_MEM_WRITEBACK");
        S_MEM_WRITE :       $display("Current state: S_MEM_WRITE");
        S_EXECUTE :         $display("Current state: S_EXECUTE");
        S_ALU_WRITEBACK :   $display("Current state: S_ALU_WRITEBACK");
        S_BRANCH :          $display("Current state: S_BRANCH");
        S_ADDI_EXECUTE :    $display("Current state: S_ADDI_EXECUTE");
        S_ADDI_WRITEBACK :  $display("Current state: S_ADDI_WRITEBACK");
        S_JUMP :            $display("Current state: S_JUMP");
        default :           $display("Current State: Invalid State");
    endcase
`endif

endmodule
