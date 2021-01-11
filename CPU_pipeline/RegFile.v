`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:57:09 12/18/2020 
// Design Name: 
// Module Name:    RegFile 
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
module RegFile(Read_register1,Read_register2,Write_register,Write_data,
RegWrite,Read_data1,Read_data2,clk
    );
 input [4:0] Read_register1,Read_register2,Write_register;
 input [31:0] Write_data;
 input RegWrite;
 input clk;
 output reg [31:0] Read_data1,Read_data2;
 reg [31:0] RegFile[31:0] ;
 integer i;
 always @ (posedge clk)
 begin    
  if(RegWrite) RegFile[Write_register] <= Write_data;
 end
 always @ (negedge clk)
 begin
   Read_data1 <= RegFile[Read_register1];
   Read_data2 <= RegFile[Read_register2]; 
 end
 initial begin
 `ifdef BASE_TEST
   $readmemh("./lab3.data/Base_register" , RegFile);
`endif 
`ifdef ADD_TEST
 $readmemh("./lab3.data/Add_register" , RegFile);
`endif
`ifdef BRANCH_TEST
for (i=0;i<32;i=i+1)
 RegFile[i]=0;
 RegFile[6]=50; //outer iteration times
 RegFile[2]=1;
 RegFile[4]=15; // inner iteration times
`endif
 end
endmodule
