`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:45:23 12/18/2020 
// Design Name: 
// Module Name:    PC 
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
module PC(clk,rst,Address_in,Address_out,PC_Write
    );
 input [31:0] Address_in;
 input clk,rst,PC_Write;
 output reg [31:0] Address_out;
 always @(posedge clk)
 begin
     if(rst) Address_out<=32'hffff_fffc;
     else if(PC_Write)
	  begin
       Address_out<=Address_in;
		 end
 end
endmodule
