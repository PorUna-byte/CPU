`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:01:55 12/18/2020 
// Design Name: 
// Module Name:    ALU_Con 
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
module ALU_Con(ALUOp,FunctionCode,ALUctr
    ); 
 input [1:0] ALUOp; 
 input [5:0] FunctionCode; 
 output reg [3:0] ALUctr; 
 
 always @(ALUOp,FunctionCode)
 begin
    case(ALUOp)
  2'b00: ALUctr <= 4'b0010; 
  2'b01: ALUctr <= 4'b0110; 
  //R-type 
  2'b10:
  begin
   case(FunctionCode)
   6'b100000: ALUctr <= 4'b0010;   
	6'b100010: ALUctr <= 4'b0110;   
	6'b100100: ALUctr <= 4'b0000;  
	6'b100101: ALUctr <= 4'b0001; 
	6'b100110: ALUctr <= 4'b1000; 
	6'b101010: ALUctr <= 4'b1010; //slt
   default: ALUctr <= 4'b1111;
   endcase
  end
  default: ALUctr <= 4'b1111;
  endcase
 end
 endmodule