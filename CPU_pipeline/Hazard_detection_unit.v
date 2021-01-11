`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:54:25 12/18/2020 
// Design Name: 
// Module Name:    Hazard_detection_unit 
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
module Hazard_detection_unit(
     input [4:0]Rs1,
	  input [4:0]Rs2,
	  input [4:0] ID_EX_Rd,
	  input [4:0] EX_MEM_Rd,
	  input Branch,
	  input ID_EX_RegWrite,
	  input EX_MEM_MemRead,
	  input ID_EX_MemRead,
	  output reg IF_ID_Write,
	  output reg PCWrite,
	  output reg ID_EX_Flush
    );
initial 
begin
IF_ID_Write<=1;
PCWrite<=1;
ID_EX_Flush<=0;
end
always @ *
begin
 if(Branch)  //If this instruction is a branch,then its data hazard may come from two stage(EXE,MEM) rather than one stage
 begin
  if(ID_EX_RegWrite&&(ID_EX_Rd==Rs1||ID_EX_Rd==Rs2)) 
  begin
   IF_ID_Write<=0;
   PCWrite<=0;
   ID_EX_Flush<=1;
  end 
  else if(EX_MEM_MemRead&&(EX_MEM_Rd==Rs1||EX_MEM_Rd==Rs2))
  begin
   IF_ID_Write<=0;
   PCWrite<=0;
   ID_EX_Flush<=1;  
  end
  else
  begin
   IF_ID_Write<=1;
   PCWrite<=1;
   ID_EX_Flush<=0;     
  end  
 end
 else if(ID_EX_MemRead&&(ID_EX_Rd==Rs1||ID_EX_Rd==Rs2))//Not a branch ,so its data hazard come from only one stage(EXE)
 begin
   IF_ID_Write<=0;
   PCWrite<=0;
   ID_EX_Flush<=1; 
 end
 else
 begin
  IF_ID_Write<=1;
  PCWrite<=1;
  ID_EX_Flush<=0;
 end
end
endmodule