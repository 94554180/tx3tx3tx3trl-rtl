module pbox_stage #(
    parameter integer DATA_WIDTH,
    parameter integer MAGIC_OFFSET
) (
    input  data_i[0:DATA_WIDTH-1],
    output data_o[0:DATA_WIDTH-1]
);
  genvar i;
  for (i = 0; i < DATA_WIDTH; i = i + 1) begin
    assign data_o[i] = data_i[(MAGIC_OFFSET+i)%DATA_WIDTH];
  end
endmodule
