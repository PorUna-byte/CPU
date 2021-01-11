`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:55:37 12/18/2020 
// Design Name: 
// Module Name:    Control 
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
module Control(OP,RegDst,Jump,Branch,MemRead,MemtoReg,
ALUOp,MemWrite,ALUSrc,RegWrite
    );
 input [5:0] OP;
 output reg RegDst,Jump,Branch,MemtoReg,ALUSrc,RegWrite,MemWrite,MemRead;
 output reg [1:0] ALUOp;
 always @ *
 begin
  case(OP)
  //R-type instruction  
  6'd0:
  begin 
  RegDst <= 1; Jump <= 0; ALUOp <= 2'b10;
  Branch <= 0; MemtoReg <= 0; RegWrite <= 1;
  MemWrite <= 0; MemRead <= 0; ALUSrc <= 0;end
  //I-type lw instruction  
  6'd35:
  begin
  RegDst <= 0; Jump <= 0; ALUOp <= 2'b00;
  Branch <= 0; MemtoReg <= 1; RegWrite <= 1;
  MemWrite <= 0; MemRead <= 1; ALUSrc <= 1;end
  //I-type sw  
  6'd43:
  begin
  RegDst <= 0; Jump <= 0; ALUOp <= 2'b00;
  Branch <= 0; MemtoReg <= 0; RegWrite <= 0;
  MemWrite <= 1; MemRead <= 0; ALUSrc <= 1;end
  //I-type beq 
  6'd4:
  begin
  RegDst <= 0; Jump <= 0; ALUOp <= 2'b01;
  Branch <= 1; MemtoReg <= 0; RegWrite <= 0;
  MemWrite <= 0; MemRead <= 0; ALUSrc <= 0;end
  //J-type 
  6'd2:
  begin
  RegDst <= 0; Jump <= 1; ALUOp <= 2'b00;
  Branch <= 0; MemtoReg <= 0; RegWrite <= 0;
  MemWrite <= 0; MemRead <= 0; ALUSrc <= 0;end
  default:
  begin
  RegDst <= 0; Jump <= 0; ALUOp <= 2'b00;
  Branch <= 0; MemtoReg <= 0; RegWrite <= 0;
  MemWrite <= 0; MemRead <= 0; ALUSrc <= 0;end
  endcase
 end
endmodule
