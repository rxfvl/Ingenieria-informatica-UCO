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
CMAKE_SOURCE_DIR = /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p6/marketplace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p6/marketplace/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/basket-test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/basket-test.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/basket-test.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/basket-test.dir/flags.make

tests/CMakeFiles/basket-test.dir/basket-test.cc.o: tests/CMakeFiles/basket-test.dir/flags.make
tests/CMakeFiles/basket-test.dir/basket-test.cc.o: ../tests/basket-test.cc
tests/CMakeFiles/basket-test.dir/basket-test.cc.o: tests/CMakeFiles/basket-test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p6/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/basket-test.dir/basket-test.cc.o"
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p6/marketplace/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/basket-test.dir/basket-test.cc.o -MF CMakeFiles/basket-test.dir/basket-test.cc.o.d -o CMakeFiles/basket-test.dir/basket-test.cc.o -c /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p6/marketplace/tests/basket-test.cc

tests/CMakeFiles/basket-test.dir/basket-test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/basket-test.dir/basket-test.cc.i"
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p6/marketplace/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p6/marketplace/tests/basket-test.cc > CMakeFiles/basket-test.dir/basket-test.cc.i

tests/CMakeFiles/basket-test.dir/basket-test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/basket-test.dir/basket-test.cc.s"
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p6/marketplace/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p6/marketplace/tests/basket-test.cc -o CMakeFiles/basket-test.dir/basket-test.cc.s

# Object files for target basket-test
basket__test_OBJECTS = \
"CMakeFiles/basket-test.dir/basket-test.cc.o"

# External object files for target basket-test
basket__test_EXTERNAL_OBJECTS =

tests/basket-test: tests/CMakeFiles/basket-test.dir/basket-test.cc.o
tests/basket-test: tests/CMakeFiles/basket-test.dir/build.make
tests/basket-test: src/basket/libbasket.a
tests/basket-test: src/product/libproduct.a
tests/basket-test: src/tv/libtv.a
tests/basket-test: src/computer/libcomputer.a
tests/basket-test: lib/libgtest_main.a
tests/basket-test: lib/libgmock_main.a
tests/basket-test: lib/libgmock.a
tests/basket-test: lib/libgtest.a
tests/basket-test: src/product/libproduct.a
tests/basket-test: tests/CMakeFiles/basket-test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p6/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable basket-test"
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p6/marketplace/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/basket-test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/basket-test.dir/build: tests/basket-test
.PHONY : tests/CMakeFiles/basket-test.dir/build

tests/CMakeFiles/basket-test.dir/clean:
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p6/marketplace/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/basket-test.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/basket-test.dir/clean

tests/CMakeFiles/basket-test.dir/depend:
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p6/marketplace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p6/marketplace /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p6/marketplace/tests /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p6/marketplace/build /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p6/marketplace/build/tests /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p6/marketplace/build/tests/CMakeFiles/basket-test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/basket-test.dir/depend

