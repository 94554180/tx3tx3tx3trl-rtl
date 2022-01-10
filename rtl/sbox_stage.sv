//import tx3tx3tx3trl_pkg::*;

/*
module sbox_unit_old #(
) (
    input  data_i[0:2],
    output data_o[0:2]
);
  wire data_i_0_neg;
  wire data_i_2_neg;

  assign data_i_0_neg = ~data_i[0];
  assign data_i_2_neg = ~data_i[2];
  assign data_o[0] = (data_i_0_neg & data_i[1]) | (data_i_0_neg & data_i[2]) | (data_i[1] & data_i[2]);
  assign data_o[1] = (data_i[0] & data_i[1]) | (data_i[0] & data_i_2_neg) | (data_i[1] & data_i_2_neg);
  assign data_o[2] = (data_i_0_neg & data_i[1]) | (data_i_0_neg & data_i_2_neg) | (data_i[1] & data_i_2_neg);
endmodule
*/

module sbox_stage #(
    parameter integer DATA_WIDTH
) (
    input  data_i[0:DATA_WIDTH-1],
    output data_o[0:DATA_WIDTH-1]
);
  parameter integer SBOX3X3_FULL_COUNT = (DATA_WIDTH / 3);
  parameter integer SBOX3X3_PARTIAL_MODULUS = (DATA_WIDTH % 3);
  parameter integer DATA_I_0S_COUNT = SBOX3X3_FULL_COUNT + (SBOX3X3_PARTIAL_MODULUS >= 1 ? 1 : 0);
  parameter integer DATA_I_2S_COUNT = SBOX3X3_FULL_COUNT;

  wire data_i_0s_neg[0:DATA_I_0S_COUNT];
  wire data_i_2s_neg[0:DATA_I_2S_COUNT];

  genvar i;
  for (i = 0; i < DATA_I_0S_COUNT; i = i + 1) begin
    assign data_i_0s_neg[i] = ~data_i[i*3];
  end
  for (i = 0; i < DATA_I_2S_COUNT; i = i + 1) begin
    assign data_i_2s_neg[i] = ~data_i[2+(i*3)];
  end

  for (i = 0; i < SBOX3X3_FULL_COUNT; i = i + 1) begin
    assign data_o[i*3] = (data_i_0s_neg[i] & data_i[(i*3)+1]) | (data_i_0s_neg[i] & data_i[(i*3)+2]) | (data_i[(i*3)+1] & data_i[(i*3)+2]);
    assign data_o[(i*3)+1] = (data_i[i*3] & data_i[(i*3)+1]) | (data_i[i*3] & data_i_2s_neg[i]) | (data_i[(i*3)+1] & data_i_2s_neg[i]);
    assign data_o[(i*3)+2] = (data_i_0s_neg[i] & data_i[(i*3)+1]) | (data_i_0s_neg[i] & data_i_2s_neg[i]) | (data_i[(i*3)+1] & data_i_2s_neg[i]);
  end
  if (SBOX3X3_PARTIAL_MODULUS == 1) begin
    assign data_o[SBOX3X3_FULL_COUNT*3] = 0;
  end
  if (SBOX3X3_PARTIAL_MODULUS == 2) begin
    assign data_o[SBOX3X3_FULL_COUNT*3] = (data_i_0s_neg[SBOX3X3_FULL_COUNT] & data_i[(SBOX3X3_FULL_COUNT*3)+1]);
    assign data_o[(SBOX3X3_FULL_COUNT*3)+1] = (data_i[SBOX3X3_FULL_COUNT*3] & data_i[(SBOX3X3_FULL_COUNT*3)+1]);
  end

endmodule
