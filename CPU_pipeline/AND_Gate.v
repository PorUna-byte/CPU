`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:03:33 12/18/2020 
// Design Name: 
// Module Name:    AND_Gate 
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
module AND_Gate(Zero,Branch,ZandB
    );
input wire Zero;
input wire Branch;
output wire ZandB;
assign ZandB=Zero&Branch;
endmodule