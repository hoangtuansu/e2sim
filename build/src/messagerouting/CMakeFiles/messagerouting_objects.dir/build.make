# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/system/workspace/e2sim/e2sim

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/system/workspace/e2sim/build

# Include any dependencies generated for this target.
include src/messagerouting/CMakeFiles/messagerouting_objects.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/messagerouting/CMakeFiles/messagerouting_objects.dir/compiler_depend.make

# Include the progress variables for this target.
include src/messagerouting/CMakeFiles/messagerouting_objects.dir/progress.make

# Include the compile flags for this target's objects.
include src/messagerouting/CMakeFiles/messagerouting_objects.dir/flags.make

src/messagerouting/CMakeFiles/messagerouting_objects.dir/e2ap_message_handler.cpp.o: src/messagerouting/CMakeFiles/messagerouting_objects.dir/flags.make
src/messagerouting/CMakeFiles/messagerouting_objects.dir/e2ap_message_handler.cpp.o: /home/system/workspace/e2sim/e2sim/src/messagerouting/e2ap_message_handler.cpp
src/messagerouting/CMakeFiles/messagerouting_objects.dir/e2ap_message_handler.cpp.o: src/messagerouting/CMakeFiles/messagerouting_objects.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/system/workspace/e2sim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/messagerouting/CMakeFiles/messagerouting_objects.dir/e2ap_message_handler.cpp.o"
	cd /home/system/workspace/e2sim/build/src/messagerouting && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/messagerouting/CMakeFiles/messagerouting_objects.dir/e2ap_message_handler.cpp.o -MF CMakeFiles/messagerouting_objects.dir/e2ap_message_handler.cpp.o.d -o CMakeFiles/messagerouting_objects.dir/e2ap_message_handler.cpp.o -c /home/system/workspace/e2sim/e2sim/src/messagerouting/e2ap_message_handler.cpp

src/messagerouting/CMakeFiles/messagerouting_objects.dir/e2ap_message_handler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/messagerouting_objects.dir/e2ap_message_handler.cpp.i"
	cd /home/system/workspace/e2sim/build/src/messagerouting && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/system/workspace/e2sim/e2sim/src/messagerouting/e2ap_message_handler.cpp > CMakeFiles/messagerouting_objects.dir/e2ap_message_handler.cpp.i

src/messagerouting/CMakeFiles/messagerouting_objects.dir/e2ap_message_handler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/messagerouting_objects.dir/e2ap_message_handler.cpp.s"
	cd /home/system/workspace/e2sim/build/src/messagerouting && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/system/workspace/e2sim/e2sim/src/messagerouting/e2ap_message_handler.cpp -o CMakeFiles/messagerouting_objects.dir/e2ap_message_handler.cpp.s

src/messagerouting/CMakeFiles/messagerouting_objects.dir/e2ap_asn1c_codec.c.o: src/messagerouting/CMakeFiles/messagerouting_objects.dir/flags.make
src/messagerouting/CMakeFiles/messagerouting_objects.dir/e2ap_asn1c_codec.c.o: /home/system/workspace/e2sim/e2sim/src/messagerouting/e2ap_asn1c_codec.c
src/messagerouting/CMakeFiles/messagerouting_objects.dir/e2ap_asn1c_codec.c.o: src/messagerouting/CMakeFiles/messagerouting_objects.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/system/workspace/e2sim/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/messagerouting/CMakeFiles/messagerouting_objects.dir/e2ap_asn1c_codec.c.o"
	cd /home/system/workspace/e2sim/build/src/messagerouting && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/messagerouting/CMakeFiles/messagerouting_objects.dir/e2ap_asn1c_codec.c.o -MF CMakeFiles/messagerouting_objects.dir/e2ap_asn1c_codec.c.o.d -o CMakeFiles/messagerouting_objects.dir/e2ap_asn1c_codec.c.o -c /home/system/workspace/e2sim/e2sim/src/messagerouting/e2ap_asn1c_codec.c

src/messagerouting/CMakeFiles/messagerouting_objects.dir/e2ap_asn1c_codec.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/messagerouting_objects.dir/e2ap_asn1c_codec.c.i"
	cd /home/system/workspace/e2sim/build/src/messagerouting && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/system/workspace/e2sim/e2sim/src/messagerouting/e2ap_asn1c_codec.c > CMakeFiles/messagerouting_objects.dir/e2ap_asn1c_codec.c.i

src/messagerouting/CMakeFiles/messagerouting_objects.dir/e2ap_asn1c_codec.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/messagerouting_objects.dir/e2ap_asn1c_codec.c.s"
	cd /home/system/workspace/e2sim/build/src/messagerouting && /usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/system/workspace/e2sim/e2sim/src/messagerouting/e2ap_asn1c_codec.c -o CMakeFiles/messagerouting_objects.dir/e2ap_asn1c_codec.c.s

messagerouting_objects: src/messagerouting/CMakeFiles/messagerouting_objects.dir/e2ap_message_handler.cpp.o
messagerouting_objects: src/messagerouting/CMakeFiles/messagerouting_objects.dir/e2ap_asn1c_codec.c.o
messagerouting_objects: src/messagerouting/CMakeFiles/messagerouting_objects.dir/build.make
.PHONY : messagerouting_objects

# Rule to build all files generated by this target.
src/messagerouting/CMakeFiles/messagerouting_objects.dir/build: messagerouting_objects
.PHONY : src/messagerouting/CMakeFiles/messagerouting_objects.dir/build

src/messagerouting/CMakeFiles/messagerouting_objects.dir/clean:
	cd /home/system/workspace/e2sim/build/src/messagerouting && $(CMAKE_COMMAND) -P CMakeFiles/messagerouting_objects.dir/cmake_clean.cmake
.PHONY : src/messagerouting/CMakeFiles/messagerouting_objects.dir/clean

src/messagerouting/CMakeFiles/messagerouting_objects.dir/depend:
	cd /home/system/workspace/e2sim/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/system/workspace/e2sim/e2sim /home/system/workspace/e2sim/e2sim/src/messagerouting /home/system/workspace/e2sim/build /home/system/workspace/e2sim/build/src/messagerouting /home/system/workspace/e2sim/build/src/messagerouting/CMakeFiles/messagerouting_objects.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/messagerouting/CMakeFiles/messagerouting_objects.dir/depend
