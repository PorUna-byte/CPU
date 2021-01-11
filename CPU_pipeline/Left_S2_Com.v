`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:55:13 12/18/2020 
// Design Name: 
// Module Name:    Left_S2_Com 
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
module Left_S2_Com(Data_in26,Data_in4,Data_out
    );
input [25:0] Data_in26;
input [3:0]  Data_in4;
output reg [31:0] Data_out;
always @(Data_in26,Data_in4)
begin     
  Data_out[27:2]<=Data_in26[25:0];
  Data_out[1:0]<=2'b00;
  Data_out[31:28]<=Data_in4[3:0];
  end
endmodule