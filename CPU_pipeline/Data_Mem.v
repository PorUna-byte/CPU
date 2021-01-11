`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:04:09 12/18/2020 
// Design Name: 
// Module Name:    Data_Mem 
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
`define BRANCH_TEST
module Data_Mem(clk,Address,Write_data,Read_data,MemWrite,MemRead
    );
input clk;
input [31:0] Address;
input [31:0] Write_data;
output reg[31:0]Read_data;
input  MemWrite,MemRead;
integer i;
reg [31:0] Mem [255:0]; 
always @ (posedge clk)
 begin 
  if(MemWrite) Mem[Address[7:0]]<=Write_data;
 end
always @ (negedge clk)
begin
 if(MemRead)
 begin
   Read_data<=Mem[Address[7:0]];
 end
end 
 /*always @ *
 begin
 if(MemRead)  Read_data<=Mem[Address[9:2]];
 end*/
 initial begin
 `ifdef BASE_TEST
  $readmemh("./lab3.data/Base_data" , Mem);
`endif 
`ifdef ADD_TEST
$readmemh("./lab3.data/Add_data" , Mem);
`endif
`ifdef BRANCH_TEST
 Mem[4]<=0;
`endif
 end
endmodule
