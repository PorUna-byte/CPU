`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:58:45 12/18/2020 
// Design Name: 
// Module Name:    Left_S2 
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
module Left_S2(Data_in,Data_out
    );
input [31:0] Data_in;
output reg[31:0] Data_out;
always @(Data_in)
begin     
  Data_out[31:2]<=Data_in[29:0];
  Data_out[1:0]<=2'b00;
  end
endmodule
