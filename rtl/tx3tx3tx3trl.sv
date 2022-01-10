`include "sbox_stage.sv"
`include "xor_stage.sv"
`include "pbox_stage.sv"

//import tx3tx3tx3trl_pkg::*;

module tx3tx3tx3trl #(
    parameter integer DATA_WIDTH,
    parameter integer MAGIC_OFFSET
) (
    input  data_i[0:DATA_WIDTH-1],
    output data_o[0:DATA_WIDTH-1]
);
  parameter integer STAGE_COUNT = 16;
  wire stage_data_linkages[0:STAGE_COUNT+1][0:DATA_WIDTH-1];
  assign stage_data_linkages[0] = data_i;
  assign data_o = stage_data_linkages[STAGE_COUNT+1];
  genvar i;
  for (i = 0; i < STAGE_COUNT - 4; i = i + 4) begin
    sbox_stage #(
        .DATA_WIDTH(DATA_WIDTH)
    ) sbox_stage_instance (
        .data_i(stage_data_linkages[i]),
        .data_o(stage_data_linkages[i+1])
    );
    genvar j;
    for (j = 0; j < 3; j = j + 1) begin
      xor_stage #(
          .DATA_WIDTH(DATA_WIDTH)
      ) xor_stage_instance (
          .data_i(stage_data_linkages[i+1+j]),
          .data_o(stage_data_linkages[i+2+j])
      );
    end
  end
  sbox_stage #(
      .DATA_WIDTH(DATA_WIDTH)
  ) sbox_stage_instance_final (
      .data_i(stage_data_linkages[i]),
      .data_o(stage_data_linkages[i+1])
  );
  genvar j;
  for (j = 0; j < 3; j = j + 1) begin
    pbox_stage #(
        .DATA_WIDTH  (DATA_WIDTH),
        .MAGIC_OFFSET(MAGIC_OFFSET)
    ) pbox_stage_instance (
        .data_i(stage_data_linkages[i+1+j]),
        .data_o(stage_data_linkages[i+2+j])
    );
  end
endmodule
