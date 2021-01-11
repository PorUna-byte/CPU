`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:56:43 12/18/2020 
// Design Name: 
// Module Name:    Mux_5 
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
module Mux_5(A,B,S,Src
    );
input [4:0] A,B;
 input Src;
 output [4:0] S;
 assign S = (Src==0) ? A:B;
endmodule

