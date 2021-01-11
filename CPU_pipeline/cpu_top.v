//////////////////////////////////////////////////////////////////////////////////
//  @Copyright HIT team
//  CPU Automated testing environment
//////////////////////////////////////////////////////////////////////////////////
`timescale 1ns / 1ps

`include "./cpu.vh"

module cpu_top(
	input 				clk,
	input 				reset,
	output reg [3 :0] segan_en,
	output reg [7 :0] segans
);

	// Initialize trace file registers
	reg [71:0] trace_data [23:0];

	initial begin
		$readmemh(`TRACE_FILE_PATH , trace_data);
	end


	// Instantiate the cpu
	(* KEEP="TRUE "*)wire [31:0] debug_wb_pc;
   (* KEEP="TRUE "*)wire        debug_wb_rf_wen;
   (* KEEP="TRUE "*)wire [4 :0] debug_wb_rf_addr;
   (* KEEP="TRUE "*)wire [31:0] debug_wb_rf_wdata;

	cpu U_cpu(
		.clk					(clk					),
		.reset				(reset				),
		.debug_wb_pc		(debug_wb_pc		),
		.debug_wb_rf_wen	(debug_wb_rf_wen	),
		.debug_wb_rf_addr	(debug_wb_rf_addr	),
		.debug_wb_rf_wdata(debug_wb_rf_wdata)
	);
	
	
	// Compare the cpu data to the reference data
	reg         test_err;
	reg         test_pass;  
  	reg [31:0]  test_counter;
		
	wire [31:0] ref_wb_pc			= trace_data[test_counter][71:40];
	wire [4 :0] ref_wb_rf_addr		= trace_data[test_counter][36:32];
	wire [31:0] ref_wb_rf_wdata   = trace_data[test_counter][31: 0];

	always @ (posedge clk) begin
		if (reset) begin
			test_err     <= 1'b0;
			test_pass    <= 1'b0;
			test_counter <= 0;
		end
		else if (test_counter == `TEST_COUNT) begin
				$display("	----PASS!!!");
				$display("Test end!");
				$display("==============================================================");
				test_pass <= 1'b1;
				#5;
				$finish;	
		end
		else if (debug_wb_rf_wen) begin
			if (debug_wb_pc != ref_wb_pc || debug_wb_rf_addr != ref_wb_rf_addr || debug_wb_rf_wdata != ref_wb_rf_wdata) begin
            $display("--------------------------------------------------------------");
				$display("Error!!!");
				$display("    Reference : PC = 0x%8h, write back reg number = %2d, write back data = 0x%8h", ref_wb_pc, ref_wb_rf_addr, ref_wb_rf_wdata);
				$display("    Error     : PC = 0x%8h, write back reg number = %2d, write back data = 0x%8h", debug_wb_pc, debug_wb_rf_addr, debug_wb_rf_wdata);
				$display("--------------------------------------------------------------");
				$display("==============================================================");
				test_err     <= 1'b1;
				#5;
				$finish;
			end
			else begin
				test_counter <= test_counter + 1;
			end
		end	
	end


	// Display module
	reg [31:0] counter;
	reg [1 :0] segan_state;
	always @ (posedge clk) begin
		if(reset) begin
			counter 		<= 0;
			segan_state <= 2'b00;
			segan_en 	<= 4'b1111;
			segans 		<= 8'b0000_0000;
		end
		else if(counter !=32'h0000_ffff) begin
			counter <= counter + 1;
		end
		else begin
			counter <= 0;
			case(segan_state)
				2'b00:begin
					segan_state <= 2'b01;
					segan_en 	<= 4'b0111;
					segans_display(test_pass,segan_state,ref_wb_pc[15:12],segans);
				end
				2'b01:begin
					segan_state <= 2'b10;
					segan_en 	<= 4'b1011;
					segans_display(test_pass,segan_state,ref_wb_pc[11: 8],segans);
				end
				2'b10:begin
					segan_state <= 2'b11;
					segan_en 	<= 4'b1101;
					segans_display(test_pass,segan_state,ref_wb_pc[ 7: 4],segans);
				end
				2'b11:begin
					segan_state <= 2'b00;
					segan_en 	<= 4'b1110;
					segans_display(test_pass,segan_state,ref_wb_pc[ 3: 0],segans);
				end			
			endcase
		end
	end
	
	task segans_display;
		input  	    	  pass;
		input      [1:0] segan_state;
		input  	  [3:0] hexnum;
		output reg [7:0] segans_code;
		if (pass) begin
			case(segan_state)
				2'b00:segans_code <= 8'b1001_0010;
				2'b01:segans_code <= 8'b1100_0001;
				2'b10:segans_code <= 8'b1100_0110;
				2'b11:segans_code <= 8'b1100_0110;
				default: begin end
			endcase
		end
		else if (test_err) begin
			case(hexnum)
				4'h0 :segans_code <= 8'b1100_0000;
				4'h1 :segans_code <= 8'b1111_1001;
				4'h2 :segans_code <= 8'b1010_0100;
				4'h3 :segans_code <= 8'b1011_0000;
				4'h4 :segans_code <= 8'b1001_1001;
				4'h5 :segans_code <= 8'b1001_0010;
				4'h6 :segans_code <= 8'b1000_0010;
				4'h7 :segans_code <= 8'b1111_1000;
				4'h8 :segans_code <= 8'b1000_0000;
				4'h9 :segans_code <= 8'b1001_0000;
				default: begin end
			endcase
		end
		else begin
			segans_code <= 8'b1111_1111;
		end
		
	endtask


endmodule
