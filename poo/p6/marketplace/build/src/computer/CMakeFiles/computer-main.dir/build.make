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
CMAKE_SOURCE_DIR = /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p5/marketplace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p5/marketplace/build

# Include any dependencies generated for this target.
include src/computer/CMakeFiles/computer-main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/computer/CMakeFiles/computer-main.dir/compiler_depend.make

# Include the progress variables for this target.
include src/computer/CMakeFiles/computer-main.dir/progress.make

# Include the compile flags for this target's objects.
include src/computer/CMakeFiles/computer-main.dir/flags.make

src/computer/CMakeFiles/computer-main.dir/computer-main.cc.o: src/computer/CMakeFiles/computer-main.dir/flags.make
src/computer/CMakeFiles/computer-main.dir/computer-main.cc.o: ../src/computer/computer-main.cc
src/computer/CMakeFiles/computer-main.dir/computer-main.cc.o: src/computer/CMakeFiles/computer-main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p5/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/computer/CMakeFiles/computer-main.dir/computer-main.cc.o"
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p5/marketplace/build/src/computer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/computer/CMakeFiles/computer-main.dir/computer-main.cc.o -MF CMakeFiles/computer-main.dir/computer-main.cc.o.d -o CMakeFiles/computer-main.dir/computer-main.cc.o -c /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p5/marketplace/src/computer/computer-main.cc

src/computer/CMakeFiles/computer-main.dir/computer-main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/computer-main.dir/computer-main.cc.i"
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p5/marketplace/build/src/computer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p5/marketplace/src/computer/computer-main.cc > CMakeFiles/computer-main.dir/computer-main.cc.i

src/computer/CMakeFiles/computer-main.dir/computer-main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/computer-main.dir/computer-main.cc.s"
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p5/marketplace/build/src/computer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p5/marketplace/src/computer/computer-main.cc -o CMakeFiles/computer-main.dir/computer-main.cc.s

# Object files for target computer-main
computer__main_OBJECTS = \
"CMakeFiles/computer-main.dir/computer-main.cc.o"

# External object files for target computer-main
computer__main_EXTERNAL_OBJECTS =

src/computer/computer-main: src/computer/CMakeFiles/computer-main.dir/computer-main.cc.o
src/computer/computer-main: src/computer/CMakeFiles/computer-main.dir/build.make
src/computer/computer-main: src/computer/libcomputer.a
src/computer/computer-main: src/product/libproduct.a
src/computer/computer-main: src/computer/CMakeFiles/computer-main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p5/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable computer-main"
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p5/marketplace/build/src/computer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/computer-main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/computer/CMakeFiles/computer-main.dir/build: src/computer/computer-main
.PHONY : src/computer/CMakeFiles/computer-main.dir/build

src/computer/CMakeFiles/computer-main.dir/clean:
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p5/marketplace/build/src/computer && $(CMAKE_COMMAND) -P CMakeFiles/computer-main.dir/cmake_clean.cmake
.PHONY : src/computer/CMakeFiles/computer-main.dir/clean

src/computer/CMakeFiles/computer-main.dir/depend:
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p5/marketplace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p5/marketplace /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p5/marketplace/src/computer /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p5/marketplace/build /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p5/marketplace/build/src/computer /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p5/marketplace/build/src/computer/CMakeFiles/computer-main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/computer/CMakeFiles/computer-main.dir/depend

