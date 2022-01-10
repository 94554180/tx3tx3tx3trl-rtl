cmake_minimum_required(VERSION 3.21.3)

project(xor_stage_test)

set(VERILATOR_INCLUDE_PATH /usr/share/verilator/include)
set(VERILATOR_OBJ_DIR_PATH ../obj_dir)
set(VERILATOR_MODULE_NAME Vxor_stage)

add_executable(
    xor_stage_test xor_stage_test.cxx
    ${VERILATOR_INCLUDE_PATH}/verilated.cpp
    ${VERILATOR_OBJ_DIR_PATH}/${VERILATOR_MODULE_NAME}.cpp
    ${VERILATOR_OBJ_DIR_PATH}/${VERILATOR_MODULE_NAME}__Syms.cpp
)
target_include_directories(xor_stage_test PUBLIC ${VERILATOR_INCLUDE_PATH} ${VERILATOR_OBJ_DIR_PATH})


