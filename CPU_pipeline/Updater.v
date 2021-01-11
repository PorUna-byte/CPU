`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:22:43 01/01/2021 
// Design Name: 
// Module Name:    Updater 
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
module Updater(
input Branch,
input Zero,
input [31:0]Beq_Addr,
input Jump,
input [31:0]Jump_Addr,
input ID_EX_Flush,
input [31:0]Chosen_addr,
input Choice,
output update_en,
output reg update_choice,
output reg IF_ID_Flush,
output reg[31:0] check_Addr
    );
assign update_en=~ID_EX_Flush;
always @ * 
begin
 if(ID_EX_Flush)
   IF_ID_Flush<=0;
 else
 begin
   if(Branch)
	begin
	  if(Choice==Zero)
	  IF_ID_Flush<=1;
	  else if(Choice&&!Zero&&Chosen_addr!=Beq_Addr)
	  IF_ID_Flush<=1;
	  else
	  IF_ID_Flush<=0;
	  
	  update_choice<=~Zero;
	  check_Addr<=Beq_Addr;
	end
	else if(Jump)
	begin 
	  IF_ID_Flush<=Choice?(Chosen_addr==Jump_Addr?0:1):1;
	  update_choice<=1;
	  check_Addr<=Jump_Addr;
	end
	else
	  IF_ID_Flush<=0;    //check_Addr and update_choice are not important here.
 end 
end
initial begin
update_choice<=0;
IF_ID_Flush<=0;
check_Addr<=32'hffff_ffff;
end
endmodule
