`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:39:07 01/03/2021 
// Design Name: 
// Module Name:    XOR 
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
module XOR(
input [31:0] Data_in_A,
input [31:0] Data_in_B,
output Zero
    );
assign Zero=Data_in_A==Data_in_B?0:1;

endmodule
