`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:58:26 12/18/2020 
// Design Name: 
// Module Name:    ID_EX 
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
module ID_EX(
    input ID_EX_Flush,
    input [31:0] PC_in,
    output reg[31:0] PC_out,
    input MemRead_in,
    output reg MemRead_out,
    input MemtoReg_in,
    output reg MemtoReg_out,
	 input [1:0]ALUOp_in,
    output reg [1:0]ALUOp_out,
    input MemWrite_in,
    output reg MemWrite_out,
    input ALUSrc_in,
    output reg ALUSrc_out,
    input RegWrite_in,
    output reg RegWrite_out,
    input [31:0] Read_data1_in,
	 output reg [31:0] Read_data1_out,
	 input [31:0] Read_data2_in,
	 output reg [31:0] Read_data2_out,
	 input [31:0] ImmB_in,
	 output reg [31:0] ImmB_out,
	 input [5:0] Inst_5_0_in,
	 output reg [5:0] Inst_5_0_out,
	 input [4:0] Rs1_in,
	 output reg [4:0] Rs1_out,
	 input [4:0] Rs2_in,
	 output reg [4:0] Rs2_out,
	 input [4:0] Rd_in,
	 output reg [4:0] Rd_out,
	 input clk,
	 input rst
    );
always @(posedge clk)
begin 
if(rst||ID_EX_Flush) 
begin
PC_out<=32'hffff_ffff;
MemRead_out<=1'b0;
MemtoReg_out<=1'b0;
ALUOp_out<=2'b0;
MemWrite_out<=1'b0;
ALUSrc_out<=1'b0;
RegWrite_out<=1'b0;
Read_data1_out<=32'b0;
Read_data2_out<=32'b0;
ImmB_out<=32'b0;
Inst_5_0_out<=6'b0;
Rs1_out<=5'b0;
Rs2_out<=5'b0;
Rd_out<=5'b0;
end
else 
begin
PC_out<=PC_in;
MemRead_out<=MemRead_in;
MemtoReg_out<=MemtoReg_in;
ALUOp_out<=ALUOp_in;
MemWrite_out<=MemWrite_in;
ALUSrc_out<=ALUSrc_in;
RegWrite_out<=RegWrite_in;
Read_data1_out<=Read_data1_in;
Read_data2_out<=Read_data2_in;
ImmB_out<=ImmB_in;
Inst_5_0_out<=Inst_5_0_in;
Rs1_out<=Rs1_in;
Rs2_out<=Rs2_in;
Rd_out<=Rd_in;
end
end
endmodule