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
CMAKE_SOURCE_DIR = /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/build

# Include any dependencies generated for this target.
include src/computer/CMakeFiles/computer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/computer/CMakeFiles/computer.dir/compiler_depend.make

# Include the progress variables for this target.
include src/computer/CMakeFiles/computer.dir/progress.make

# Include the compile flags for this target's objects.
include src/computer/CMakeFiles/computer.dir/flags.make

src/computer/CMakeFiles/computer.dir/computer.cc.o: src/computer/CMakeFiles/computer.dir/flags.make
src/computer/CMakeFiles/computer.dir/computer.cc.o: ../src/computer/computer.cc
src/computer/CMakeFiles/computer.dir/computer.cc.o: src/computer/CMakeFiles/computer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/computer/CMakeFiles/computer.dir/computer.cc.o"
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/build/src/computer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/computer/CMakeFiles/computer.dir/computer.cc.o -MF CMakeFiles/computer.dir/computer.cc.o.d -o CMakeFiles/computer.dir/computer.cc.o -c /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/src/computer/computer.cc

src/computer/CMakeFiles/computer.dir/computer.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/computer.dir/computer.cc.i"
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/build/src/computer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/src/computer/computer.cc > CMakeFiles/computer.dir/computer.cc.i

src/computer/CMakeFiles/computer.dir/computer.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/computer.dir/computer.cc.s"
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/build/src/computer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/src/computer/computer.cc -o CMakeFiles/computer.dir/computer.cc.s

# Object files for target computer
computer_OBJECTS = \
"CMakeFiles/computer.dir/computer.cc.o"

# External object files for target computer
computer_EXTERNAL_OBJECTS =

src/computer/libcomputer.a: src/computer/CMakeFiles/computer.dir/computer.cc.o
src/computer/libcomputer.a: src/computer/CMakeFiles/computer.dir/build.make
src/computer/libcomputer.a: src/computer/CMakeFiles/computer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libcomputer.a"
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/build/src/computer && $(CMAKE_COMMAND) -P CMakeFiles/computer.dir/cmake_clean_target.cmake
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/build/src/computer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/computer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/computer/CMakeFiles/computer.dir/build: src/computer/libcomputer.a
.PHONY : src/computer/CMakeFiles/computer.dir/build

src/computer/CMakeFiles/computer.dir/clean:
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/build/src/computer && $(CMAKE_COMMAND) -P CMakeFiles/computer.dir/cmake_clean.cmake
.PHONY : src/computer/CMakeFiles/computer.dir/clean

src/computer/CMakeFiles/computer.dir/depend:
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/src/computer /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/build /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/build/src/computer /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p7/marketplace/build/src/computer/CMakeFiles/computer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/computer/CMakeFiles/computer.dir/depend

