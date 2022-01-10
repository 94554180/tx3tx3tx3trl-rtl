module xor_stage #(
    parameter integer DATA_WIDTH
) (
    input  data_i[0:DATA_WIDTH-1],
    output data_o[0:DATA_WIDTH-1]
);
  assign data_o[0] = data_i[0] ^ data_i[DATA_WIDTH-1] ^ data_i[2];
  genvar i;
  for (i = 1; i < DATA_WIDTH; i = i + 1) begin
    assign data_o[i] = data_i[i] ^ data_i[i-1];
  end
endmodule
