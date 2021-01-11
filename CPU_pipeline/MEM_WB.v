`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:04:34 12/18/2020 
// Design Name: 
// Module Name:    MEM_WB 
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
module MEM_WB(
    input [31:0] PC_in,
	 output reg [31:0]PC_out,
	 input RegWrite_in,
	 output reg RegWrite_out, 
	 input [31:0] Write_data_in,
	 output reg [31:0]Write_data_out,
	 input [4:0] Rd_in,
	 output reg [4:0] Rd_out,
	 input clk,
	 input rst
    );
always @(posedge clk)
begin
if(!rst)begin
PC_out<=PC_in;
RegWrite_out<=RegWrite_in;
Write_data_out<=Write_data_in;
Rd_out<=Rd_in;end
else begin
PC_out<=32'hffff_ffff;
RegWrite_out<=1'b0;
Write_data_out<=32'b0;
Rd_out<=5'b0;
end
end
endmodule
