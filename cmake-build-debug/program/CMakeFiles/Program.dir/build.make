# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/58/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/58/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pobi/Pulpit/ProjectPOBI

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pobi/Pulpit/ProjectPOBI/cmake-build-debug

# Include any dependencies generated for this target.
include program/CMakeFiles/Program.dir/depend.make

# Include the progress variables for this target.
include program/CMakeFiles/Program.dir/progress.make

# Include the compile flags for this target's objects.
include program/CMakeFiles/Program.dir/flags.make

program/CMakeFiles/Program.dir/src/main.cpp.o: program/CMakeFiles/Program.dir/flags.make
program/CMakeFiles/Program.dir/src/main.cpp.o: ../program/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pobi/Pulpit/ProjectPOBI/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object program/CMakeFiles/Program.dir/src/main.cpp.o"
	cd /home/pobi/Pulpit/ProjectPOBI/cmake-build-debug/program && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Program.dir/src/main.cpp.o -c /home/pobi/Pulpit/ProjectPOBI/program/src/main.cpp

program/CMakeFiles/Program.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Program.dir/src/main.cpp.i"
	cd /home/pobi/Pulpit/ProjectPOBI/cmake-build-debug/program && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pobi/Pulpit/ProjectPOBI/program/src/main.cpp > CMakeFiles/Program.dir/src/main.cpp.i

program/CMakeFiles/Program.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Program.dir/src/main.cpp.s"
	cd /home/pobi/Pulpit/ProjectPOBI/cmake-build-debug/program && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pobi/Pulpit/ProjectPOBI/program/src/main.cpp -o CMakeFiles/Program.dir/src/main.cpp.s

# Object files for target Program
Program_OBJECTS = \
"CMakeFiles/Program.dir/src/main.cpp.o"

# External object files for target Program
Program_EXTERNAL_OBJECTS =

program/Program: program/CMakeFiles/Program.dir/src/main.cpp.o
program/Program: program/CMakeFiles/Program.dir/build.make
program/Program: library/libLibrary.a
program/Program: program/CMakeFiles/Program.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pobi/Pulpit/ProjectPOBI/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Program"
	cd /home/pobi/Pulpit/ProjectPOBI/cmake-build-debug/program && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Program.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
program/CMakeFiles/Program.dir/build: program/Program

.PHONY : program/CMakeFiles/Program.dir/build

program/CMakeFiles/Program.dir/clean:
	cd /home/pobi/Pulpit/ProjectPOBI/cmake-build-debug/program && $(CMAKE_COMMAND) -P CMakeFiles/Program.dir/cmake_clean.cmake
.PHONY : program/CMakeFiles/Program.dir/clean

program/CMakeFiles/Program.dir/depend:
	cd /home/pobi/Pulpit/ProjectPOBI/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pobi/Pulpit/ProjectPOBI /home/pobi/Pulpit/ProjectPOBI/program /home/pobi/Pulpit/ProjectPOBI/cmake-build-debug /home/pobi/Pulpit/ProjectPOBI/cmake-build-debug/program /home/pobi/Pulpit/ProjectPOBI/cmake-build-debug/program/CMakeFiles/Program.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : program/CMakeFiles/Program.dir/depend
