`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:40:54 12/18/2020 
// Design Name: 
// Module Name:    Mux3_32 
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
module Mux3_32(
  input [31:0]Read_data_reg,
  input [31:0]Read_data_mem,
  input [31:0]ALU_output,
  input wire[1:0] Forward,
  output [31:0] one_of_three
    );
  assign one_of_three=Forward[1]==1?ALU_output:
  Forward[0]==1?Read_data_mem:Read_data_reg;
endmodule
