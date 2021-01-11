`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:27:48 12/18/2020 
// Design Name: 
// Module Name:    Mux_32 
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
module Mux_32(A,B,S,Src
    );
input [31:0] A,B;
 input Src;
 output [31:0] S;
 assign S = (Src==0) ? A:B;
endmodule
