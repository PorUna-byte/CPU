`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:57:49 12/18/2020 
// Design Name: 
// Module Name:    Sign_Ext 
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
module Sign_Ext(Data_in,Data_out
    );
input [15:0] Data_in;
output [31:0] Data_out; 
always @(Data_in);
begin
assign Data_out={{16{Data_in[15]}},Data_in[15:0]};
end
endmodule
