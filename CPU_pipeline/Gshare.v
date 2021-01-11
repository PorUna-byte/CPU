`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:51:27 01/01/2021 
// Design Name: 
// Module Name:    Gshare 
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
module Gshare(
input [31:0] PC_in,
input [31:0] old_PC,
input update_choice,  
input update_en,
input is_Branch,
input clk,
output  Gpre,
output reg [7:0] GHR
    );
wire [7:0]PCin_xor_GHR=(~GHR&PC_in[9:2])|(GHR&~PC_in[9:2]);
wire [7:0]oldPC_xor_GHR=(~GHR&old_PC[9:2])|(GHR&~old_PC[9:2]);
reg [1:0] PHT[255:0];
integer i;
initial begin  //initialization
GHR<=8'b0;
for (i=0;i<256;i=i+1)
 PHT[i]<=2'b00;
end
assign Gpre=PHT[PCin_xor_GHR]>1?1:0;//if 2'b11,2'b10 Taken! else not taken.A xor B==((~A)&B)|(A&(~B))
always @(posedge clk)  //always update at the posedge of clk
begin
 if(update_en&&is_Branch) //if update_en is enabled,then update!
 begin
   if(update_choice)
   begin
    PHT[oldPC_xor_GHR]=(PHT[oldPC_xor_GHR]==3?3:(PHT[oldPC_xor_GHR]+1));
    GHR={GHR[6:0],1'b1};
   end
   else
   begin
    PHT[oldPC_xor_GHR]=(PHT[oldPC_xor_GHR]==0?0:(PHT[oldPC_xor_GHR]-1));
    GHR={GHR[6:0],1'b0};
   end
 end
end
endmodule
