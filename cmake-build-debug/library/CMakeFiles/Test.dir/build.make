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
CMAKE_SOURCE_DIR = /home/pobi/Pulpit/123

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pobi/Pulpit/123/cmake-build-debug

# Include any dependencies generated for this target.
include library/CMakeFiles/Test.dir/depend.make

# Include the progress variables for this target.
include library/CMakeFiles/Test.dir/progress.make

# Include the compile flags for this target's objects.
include library/CMakeFiles/Test.dir/flags.make

library/CMakeFiles/Test.dir/test/master.cpp.o: library/CMakeFiles/Test.dir/flags.make
library/CMakeFiles/Test.dir/test/master.cpp.o: ../library/test/master.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pobi/Pulpit/123/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object library/CMakeFiles/Test.dir/test/master.cpp.o"
	cd /home/pobi/Pulpit/123/cmake-build-debug/library && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/test/master.cpp.o -c /home/pobi/Pulpit/123/library/test/master.cpp

library/CMakeFiles/Test.dir/test/master.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/test/master.cpp.i"
	cd /home/pobi/Pulpit/123/cmake-build-debug/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pobi/Pulpit/123/library/test/master.cpp > CMakeFiles/Test.dir/test/master.cpp.i

library/CMakeFiles/Test.dir/test/master.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/test/master.cpp.s"
	cd /home/pobi/Pulpit/123/cmake-build-debug/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pobi/Pulpit/123/library/test/master.cpp -o CMakeFiles/Test.dir/test/master.cpp.s

library/CMakeFiles/Test.dir/test/RepoTest.cpp.o: library/CMakeFiles/Test.dir/flags.make
library/CMakeFiles/Test.dir/test/RepoTest.cpp.o: ../library/test/RepoTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pobi/Pulpit/123/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object library/CMakeFiles/Test.dir/test/RepoTest.cpp.o"
	cd /home/pobi/Pulpit/123/cmake-build-debug/library && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/test/RepoTest.cpp.o -c /home/pobi/Pulpit/123/library/test/RepoTest.cpp

library/CMakeFiles/Test.dir/test/RepoTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/test/RepoTest.cpp.i"
	cd /home/pobi/Pulpit/123/cmake-build-debug/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pobi/Pulpit/123/library/test/RepoTest.cpp > CMakeFiles/Test.dir/test/RepoTest.cpp.i

library/CMakeFiles/Test.dir/test/RepoTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/test/RepoTest.cpp.s"
	cd /home/pobi/Pulpit/123/cmake-build-debug/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pobi/Pulpit/123/library/test/RepoTest.cpp -o CMakeFiles/Test.dir/test/RepoTest.cpp.s

library/CMakeFiles/Test.dir/test/ClientTest.cpp.o: library/CMakeFiles/Test.dir/flags.make
library/CMakeFiles/Test.dir/test/ClientTest.cpp.o: ../library/test/ClientTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pobi/Pulpit/123/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object library/CMakeFiles/Test.dir/test/ClientTest.cpp.o"
	cd /home/pobi/Pulpit/123/cmake-build-debug/library && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/test/ClientTest.cpp.o -c /home/pobi/Pulpit/123/library/test/ClientTest.cpp

library/CMakeFiles/Test.dir/test/ClientTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/test/ClientTest.cpp.i"
	cd /home/pobi/Pulpit/123/cmake-build-debug/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pobi/Pulpit/123/library/test/ClientTest.cpp > CMakeFiles/Test.dir/test/ClientTest.cpp.i

library/CMakeFiles/Test.dir/test/ClientTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/test/ClientTest.cpp.s"
	cd /home/pobi/Pulpit/123/cmake-build-debug/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pobi/Pulpit/123/library/test/ClientTest.cpp -o CMakeFiles/Test.dir/test/ClientTest.cpp.s

library/CMakeFiles/Test.dir/test/RentTest.cpp.o: library/CMakeFiles/Test.dir/flags.make
library/CMakeFiles/Test.dir/test/RentTest.cpp.o: ../library/test/RentTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pobi/Pulpit/123/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object library/CMakeFiles/Test.dir/test/RentTest.cpp.o"
	cd /home/pobi/Pulpit/123/cmake-build-debug/library && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/test/RentTest.cpp.o -c /home/pobi/Pulpit/123/library/test/RentTest.cpp

library/CMakeFiles/Test.dir/test/RentTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/test/RentTest.cpp.i"
	cd /home/pobi/Pulpit/123/cmake-build-debug/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pobi/Pulpit/123/library/test/RentTest.cpp > CMakeFiles/Test.dir/test/RentTest.cpp.i

library/CMakeFiles/Test.dir/test/RentTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/test/RentTest.cpp.s"
	cd /home/pobi/Pulpit/123/cmake-build-debug/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pobi/Pulpit/123/library/test/RentTest.cpp -o CMakeFiles/Test.dir/test/RentTest.cpp.s

library/CMakeFiles/Test.dir/test/SpaceTest.cpp.o: library/CMakeFiles/Test.dir/flags.make
library/CMakeFiles/Test.dir/test/SpaceTest.cpp.o: ../library/test/SpaceTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pobi/Pulpit/123/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object library/CMakeFiles/Test.dir/test/SpaceTest.cpp.o"
	cd /home/pobi/Pulpit/123/cmake-build-debug/library && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/test/SpaceTest.cpp.o -c /home/pobi/Pulpit/123/library/test/SpaceTest.cpp

library/CMakeFiles/Test.dir/test/SpaceTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/test/SpaceTest.cpp.i"
	cd /home/pobi/Pulpit/123/cmake-build-debug/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pobi/Pulpit/123/library/test/SpaceTest.cpp > CMakeFiles/Test.dir/test/SpaceTest.cpp.i

library/CMakeFiles/Test.dir/test/SpaceTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/test/SpaceTest.cpp.s"
	cd /home/pobi/Pulpit/123/cmake-build-debug/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pobi/Pulpit/123/library/test/SpaceTest.cpp -o CMakeFiles/Test.dir/test/SpaceTest.cpp.s

# Object files for target Test
Test_OBJECTS = \
"CMakeFiles/Test.dir/test/master.cpp.o" \
"CMakeFiles/Test.dir/test/RepoTest.cpp.o" \
"CMakeFiles/Test.dir/test/ClientTest.cpp.o" \
"CMakeFiles/Test.dir/test/RentTest.cpp.o" \
"CMakeFiles/Test.dir/test/SpaceTest.cpp.o"

# External object files for target Test
Test_EXTERNAL_OBJECTS =

library/Test: library/CMakeFiles/Test.dir/test/master.cpp.o
library/Test: library/CMakeFiles/Test.dir/test/RepoTest.cpp.o
library/Test: library/CMakeFiles/Test.dir/test/ClientTest.cpp.o
library/Test: library/CMakeFiles/Test.dir/test/RentTest.cpp.o
library/Test: library/CMakeFiles/Test.dir/test/SpaceTest.cpp.o
library/Test: library/CMakeFiles/Test.dir/build.make
library/Test: library/libLibrary.a
library/Test: /usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.so
library/Test: library/CMakeFiles/Test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pobi/Pulpit/123/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Test"
	cd /home/pobi/Pulpit/123/cmake-build-debug/library && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
library/CMakeFiles/Test.dir/build: library/Test

.PHONY : library/CMakeFiles/Test.dir/build

library/CMakeFiles/Test.dir/clean:
	cd /home/pobi/Pulpit/123/cmake-build-debug/library && $(CMAKE_COMMAND) -P CMakeFiles/Test.dir/cmake_clean.cmake
.PHONY : library/CMakeFiles/Test.dir/clean

library/CMakeFiles/Test.dir/depend:
	cd /home/pobi/Pulpit/123/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pobi/Pulpit/123 /home/pobi/Pulpit/123/library /home/pobi/Pulpit/123/cmake-build-debug /home/pobi/Pulpit/123/cmake-build-debug/library /home/pobi/Pulpit/123/cmake-build-debug/library/CMakeFiles/Test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : library/CMakeFiles/Test.dir/depend

