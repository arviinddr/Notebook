# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/Downloads/linux

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/Downloads/linux

# Include any dependencies generated for this target.
include CMakeFiles/sudokuMain.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sudokuMain.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sudokuMain.dir/flags.make

CMakeFiles/sudokuMain.dir/passing.c.o: CMakeFiles/sudokuMain.dir/flags.make
CMakeFiles/sudokuMain.dir/passing.c.o: passing.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/Downloads/linux/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/sudokuMain.dir/passing.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/sudokuMain.dir/passing.c.o   -c /home/user/Downloads/linux/passing.c

CMakeFiles/sudokuMain.dir/passing.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sudokuMain.dir/passing.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/Downloads/linux/passing.c > CMakeFiles/sudokuMain.dir/passing.c.i

CMakeFiles/sudokuMain.dir/passing.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sudokuMain.dir/passing.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/Downloads/linux/passing.c -o CMakeFiles/sudokuMain.dir/passing.c.s

CMakeFiles/sudokuMain.dir/passing.c.o.requires:

.PHONY : CMakeFiles/sudokuMain.dir/passing.c.o.requires

CMakeFiles/sudokuMain.dir/passing.c.o.provides: CMakeFiles/sudokuMain.dir/passing.c.o.requires
	$(MAKE) -f CMakeFiles/sudokuMain.dir/build.make CMakeFiles/sudokuMain.dir/passing.c.o.provides.build
.PHONY : CMakeFiles/sudokuMain.dir/passing.c.o.provides

CMakeFiles/sudokuMain.dir/passing.c.o.provides.build: CMakeFiles/sudokuMain.dir/passing.c.o


# Object files for target sudokuMain
sudokuMain_OBJECTS = \
"CMakeFiles/sudokuMain.dir/passing.c.o"

# External object files for target sudokuMain
sudokuMain_EXTERNAL_OBJECTS =

sudokuMain: CMakeFiles/sudokuMain.dir/passing.c.o
sudokuMain: CMakeFiles/sudokuMain.dir/build.make
sudokuMain: /usr/lib/libgtest.a
sudokuMain: CMakeFiles/sudokuMain.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/Downloads/linux/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable sudokuMain"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sudokuMain.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sudokuMain.dir/build: sudokuMain

.PHONY : CMakeFiles/sudokuMain.dir/build

CMakeFiles/sudokuMain.dir/requires: CMakeFiles/sudokuMain.dir/passing.c.o.requires

.PHONY : CMakeFiles/sudokuMain.dir/requires

CMakeFiles/sudokuMain.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sudokuMain.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sudokuMain.dir/clean

CMakeFiles/sudokuMain.dir/depend:
	cd /home/user/Downloads/linux && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/Downloads/linux /home/user/Downloads/linux /home/user/Downloads/linux /home/user/Downloads/linux /home/user/Downloads/linux/CMakeFiles/sudokuMain.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sudokuMain.dir/depend

