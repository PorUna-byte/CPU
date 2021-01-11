`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:03:11 12/18/2020 
// Design Name: 
// Module Name:    EX_MEM 
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
module EX_MEM(
  input [31:0] PC_in,
  output reg [31:0] PC_out,
  input MemRead_in,
  output reg MemRead_out,
  input MemtoReg_in,
  output reg MemtoReg_out,
  input MemWrite_in,
  output reg MemWrite_out,
  input RegWrite_in,
  output reg RegWrite_out,
  input [31:0] ALU_output_in,
  output reg [31:0] ALU_output_out,
  input [31:0] Write_data_in,
  output reg [31:0] Write_data_out,
  input [4:0] Rd_in,
  output reg [4:0] Rd_out,
  input clk,
  input rst
    );
always @(posedge clk)
begin
if(rst)begin
PC_out<=32'hffff_ffff;
MemRead_out<=1'b0;
MemtoReg_out<=1'b0;
MemWrite_out<=1'b0;
RegWrite_out<=1'b0;
ALU_output_out<=32'b0;
Write_data_out<=32'b0;
Rd_out<=5'b0;
end
else
begin
PC_out<=PC_in;
MemRead_out<=MemRead_in;
MemtoReg_out<=MemtoReg_in;
MemWrite_out<=MemWrite_in;
RegWrite_out<=RegWrite_in;
ALU_output_out<=ALU_output_in;
Write_data_out<=Write_data_in;
Rd_out<=Rd_in;
end
end
endmodule