# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/xor_stage_test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/xor_stage_test

# Include any dependencies generated for this target.
include CMakeFiles/xor_stage_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/xor_stage_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/xor_stage_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/xor_stage_test.dir/flags.make

CMakeFiles/xor_stage_test.dir/xor_stage_test.cxx.o: CMakeFiles/xor_stage_test.dir/flags.make
CMakeFiles/xor_stage_test.dir/xor_stage_test.cxx.o: xor_stage_test.cxx
CMakeFiles/xor_stage_test.dir/xor_stage_test.cxx.o: CMakeFiles/xor_stage_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/xor_stage_test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/xor_stage_test.dir/xor_stage_test.cxx.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/xor_stage_test.dir/xor_stage_test.cxx.o -MF CMakeFiles/xor_stage_test.dir/xor_stage_test.cxx.o.d -o CMakeFiles/xor_stage_test.dir/xor_stage_test.cxx.o -c /home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/xor_stage_test/xor_stage_test.cxx

CMakeFiles/xor_stage_test.dir/xor_stage_test.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/xor_stage_test.dir/xor_stage_test.cxx.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/xor_stage_test/xor_stage_test.cxx > CMakeFiles/xor_stage_test.dir/xor_stage_test.cxx.i

CMakeFiles/xor_stage_test.dir/xor_stage_test.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/xor_stage_test.dir/xor_stage_test.cxx.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/xor_stage_test/xor_stage_test.cxx -o CMakeFiles/xor_stage_test.dir/xor_stage_test.cxx.s

CMakeFiles/xor_stage_test.dir/usr/share/verilator/include/verilated.cpp.o: CMakeFiles/xor_stage_test.dir/flags.make
CMakeFiles/xor_stage_test.dir/usr/share/verilator/include/verilated.cpp.o: /usr/share/verilator/include/verilated.cpp
CMakeFiles/xor_stage_test.dir/usr/share/verilator/include/verilated.cpp.o: CMakeFiles/xor_stage_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/xor_stage_test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/xor_stage_test.dir/usr/share/verilator/include/verilated.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/xor_stage_test.dir/usr/share/verilator/include/verilated.cpp.o -MF CMakeFiles/xor_stage_test.dir/usr/share/verilator/include/verilated.cpp.o.d -o CMakeFiles/xor_stage_test.dir/usr/share/verilator/include/verilated.cpp.o -c /usr/share/verilator/include/verilated.cpp

CMakeFiles/xor_stage_test.dir/usr/share/verilator/include/verilated.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/xor_stage_test.dir/usr/share/verilator/include/verilated.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /usr/share/verilator/include/verilated.cpp > CMakeFiles/xor_stage_test.dir/usr/share/verilator/include/verilated.cpp.i

CMakeFiles/xor_stage_test.dir/usr/share/verilator/include/verilated.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/xor_stage_test.dir/usr/share/verilator/include/verilated.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /usr/share/verilator/include/verilated.cpp -o CMakeFiles/xor_stage_test.dir/usr/share/verilator/include/verilated.cpp.s

CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage.cpp.o: CMakeFiles/xor_stage_test.dir/flags.make
CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage.cpp.o: /home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage.cpp
CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage.cpp.o: CMakeFiles/xor_stage_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/xor_stage_test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage.cpp.o -MF CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage.cpp.o.d -o CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage.cpp.o -c /home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage.cpp

CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage.cpp > CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage.cpp.i

CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage.cpp -o CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage.cpp.s

CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage__Syms.cpp.o: CMakeFiles/xor_stage_test.dir/flags.make
CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage__Syms.cpp.o: /home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage__Syms.cpp
CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage__Syms.cpp.o: CMakeFiles/xor_stage_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/xor_stage_test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage__Syms.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage__Syms.cpp.o -MF CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage__Syms.cpp.o.d -o CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage__Syms.cpp.o -c /home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage__Syms.cpp

CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage__Syms.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage__Syms.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage__Syms.cpp > CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage__Syms.cpp.i

CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage__Syms.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage__Syms.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage__Syms.cpp -o CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage__Syms.cpp.s

# Object files for target xor_stage_test
xor_stage_test_OBJECTS = \
"CMakeFiles/xor_stage_test.dir/xor_stage_test.cxx.o" \
"CMakeFiles/xor_stage_test.dir/usr/share/verilator/include/verilated.cpp.o" \
"CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage.cpp.o" \
"CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage__Syms.cpp.o"

# External object files for target xor_stage_test
xor_stage_test_EXTERNAL_OBJECTS =

xor_stage_test: CMakeFiles/xor_stage_test.dir/xor_stage_test.cxx.o
xor_stage_test: CMakeFiles/xor_stage_test.dir/usr/share/verilator/include/verilated.cpp.o
xor_stage_test: CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage.cpp.o
xor_stage_test: CMakeFiles/xor_stage_test.dir/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/obj_dir/Vxor_stage__Syms.cpp.o
xor_stage_test: CMakeFiles/xor_stage_test.dir/build.make
xor_stage_test: CMakeFiles/xor_stage_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/xor_stage_test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable xor_stage_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/xor_stage_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/xor_stage_test.dir/build: xor_stage_test
.PHONY : CMakeFiles/xor_stage_test.dir/build

CMakeFiles/xor_stage_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/xor_stage_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/xor_stage_test.dir/clean

CMakeFiles/xor_stage_test.dir/depend:
	cd /home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/xor_stage_test && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/xor_stage_test /home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/xor_stage_test /home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/xor_stage_test /home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/xor_stage_test /home/user/Documents/Projects/tx3tx3tx3trl-rtl/test/xor_stage_test/CMakeFiles/xor_stage_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/xor_stage_test.dir/depend
