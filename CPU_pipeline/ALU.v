`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:59:15 12/18/2020 
// Design Name: 
// Module Name:    ALU 
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
module ALU(ctr,A,B,ALU_output
    ); 
 input [3:0] ctr;
 input [31:0] A,B;
 output reg [31:0] ALU_output;
 
 always @ (A,B,ctr)
 begin
    case(ctr)
  4'd0: ALU_output <= A&B;
  4'd1: ALU_output <= A|B;
  4'd2: ALU_output <= A+B;
  4'd6: ALU_output <= A-B;
  4'd8: ALU_output <= ((~A)&B)|(A&(~B));
  4'd10:ALU_output <= A<=B ? 1:0;
  default: ALU_output <= 0;
  endcase
 end
 endmodule

