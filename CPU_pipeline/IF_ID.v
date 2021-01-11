`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:53:30 12/18/2020 
// Design Name: 
// Module Name:    IF_ID 
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
module IF_ID(
    input [31:0] PC_in,
	 output reg[31:0] PC_out, 
	 input Choice_in,
	 output reg Choice_out,
	 input [31:0] Inst_in,
	 output reg[31:0] Inst_out,
	 input [31:0] Chosen_Addr_in,
	 output reg[31:0] Chosen_Addr_out,
	 input IF_ID_Write,
	 input IF_ID_Flush,
	 input clk,
	 input rst
    );
always @(posedge clk)
begin
 if(rst||IF_ID_Flush)
 begin 
  Choice_out<=0;
  Chosen_Addr_out<=32'hffff_ffff;
  PC_out<=32'hffff_ffff;
  Inst_out<=32'hffff_ffff;
 end
 else if(IF_ID_Write)
 begin
  Choice_out<=Choice_in;
  Chosen_Addr_out<=Chosen_Addr_in; 
  PC_out<=PC_in;
  Inst_out<=Inst_in;  
 end
end
endmodule
