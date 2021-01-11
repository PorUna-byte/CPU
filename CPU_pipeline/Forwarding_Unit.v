`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:02:35 12/18/2020 
// Design Name: 
// Module Name:    Forwarding_Unit 
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
module Forwarding_Unit(
  input [4:0]IF_ID_Rs1,
  input [4:0]IF_ID_Rs2,
  input [4:0]ID_EX_Rs1,
  input [4:0]ID_EX_Rs2,
  input [4:0]EX_MEM_Rd,
  input [4:0]MEM_WB_Rd,
  input EX_MEM_RegWrite,
  input MEM_WB_RegWrite,
  output reg[1:0]Forward_1,
  output reg[1:0]Forward_2,
  output reg[1:0]Forward_A,
  output reg[1:0]Forward_B
    );
  initial
  begin
  Forward_1<=2'b00;
  Forward_2<=2'b00;
  Forward_A<=2'b00;
  Forward_B<=2'b00;  
  end
  always @ *
  begin  
  if(EX_MEM_RegWrite&&
  EX_MEM_Rd==ID_EX_Rs1)
  Forward_1<=2'b10;
  else if(MEM_WB_RegWrite&&MEM_WB_Rd==ID_EX_Rs1)
  Forward_1<=2'b01;
  else
  Forward_1<=2'b00;
  if(EX_MEM_RegWrite&&
  EX_MEM_Rd==ID_EX_Rs2)
  Forward_2<=2'b10;
  else if(MEM_WB_RegWrite&&MEM_WB_Rd==ID_EX_Rs2)
  Forward_2<=2'b01;
  else
  Forward_2<=2'b00;
  
  if(EX_MEM_RegWrite&&
  EX_MEM_Rd==IF_ID_Rs1)
  Forward_A<=2'b10;
  else if(MEM_WB_RegWrite&&MEM_WB_Rd==IF_ID_Rs1)
  Forward_A<=2'b01;
  else
  Forward_A<=2'b00;
  if(EX_MEM_RegWrite&&
  EX_MEM_Rd==IF_ID_Rs2)
  Forward_B<=2'b10;
  else if(MEM_WB_RegWrite&&MEM_WB_Rd==IF_ID_Rs2)
  Forward_B<=2'b01;
  else
  Forward_B<=2'b00;  
  
  end
  endmodule
