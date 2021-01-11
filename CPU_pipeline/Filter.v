`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:56:11 12/18/2020 
// Design Name: 
// Module Name:    Filter 
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
module Filter(
   input Jump_in,
   output Jump_out,
   input  Branch_in,
	output  Branch_out,
	input MemRead_in,
	output  MemRead_out,
	input MemtoReg_in,
	output  MemtoReg_out,
	input [1:0]ALUOp_in,
	output [1:0]ALUOp_out,
	input MemWrite_in,
	output  MemWrite_out,
	input ALUSrc_in,
	output  ALUSrc_out,
	input RegWrite_in,
	output  RegWrite_out,
	input flush
    );
/*always @ *
begin
if(flush)
begin
Jump_out<= 1'b0;
ALUOp_out<= 2'b00;
Branch_out<= 1'b0;
MemtoReg_out<=1'b0;
RegWrite_out<=1'b0;
MemWrite_out<=1'b0;
MemRead_out<= 1'b0;
ALUSrc_out<= 1'b0;
end
else begin
Jump_out<= Jump_in;
ALUOp_out<= ALUOp_in;
Branch_out<= Branch_in;
MemtoReg_out<=MemtoReg_in;
RegWrite_out<=RegWrite_in;
MemWrite_out<=MemWrite_in;
MemRead_out<= MemRead_in;
ALUSrc_out<= ALUSrc_in;
end
end*/
assign Jump_out= flush?1'b0:Jump_in;
assign ALUOp_out= flush?2'b00:ALUOp_in;
assign Branch_out= flush?1'b0:Branch_in;
assign MemtoReg_out= flush?1'b0:MemtoReg_in;
assign RegWrite_out= flush?1'b0:RegWrite_in;
assign MemWrite_out= flush?1'b0:MemWrite_in;
assign MemRead_out= flush?1'b0:MemRead_in;
assign ALUSrc_out= flush?1'b0:ALUSrc_in;
endmodule
