`define BASE_TEST

`ifdef  BASE_TEST
`define TEST_COUNT 15
`define TRACE_FILE_PATH "./lab3.data/base_cpu_trace"
`endif

`ifdef  ADD_TEST_1
`define TEST_COUNT 23
`define TRACE_FILE_PATH "./lab3.data/additional_cpu_trace1"
`endif

`ifdef  ADD_TEST_2
`define TEST_COUNT 23
`define TRACE_FILE_PATH "./lab3.data/additional_cpu_trace2"

`endif