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
CMAKE_SOURCE_DIR = /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p4/marketplace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p4/marketplace/build

# Include any dependencies generated for this target.
include src/product/CMakeFiles/product.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/product/CMakeFiles/product.dir/compiler_depend.make

# Include the progress variables for this target.
include src/product/CMakeFiles/product.dir/progress.make

# Include the compile flags for this target's objects.
include src/product/CMakeFiles/product.dir/flags.make

src/product/CMakeFiles/product.dir/product.cc.o: src/product/CMakeFiles/product.dir/flags.make
src/product/CMakeFiles/product.dir/product.cc.o: ../src/product/product.cc
src/product/CMakeFiles/product.dir/product.cc.o: src/product/CMakeFiles/product.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p4/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/product/CMakeFiles/product.dir/product.cc.o"
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p4/marketplace/build/src/product && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/product/CMakeFiles/product.dir/product.cc.o -MF CMakeFiles/product.dir/product.cc.o.d -o CMakeFiles/product.dir/product.cc.o -c /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p4/marketplace/src/product/product.cc

src/product/CMakeFiles/product.dir/product.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/product.dir/product.cc.i"
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p4/marketplace/build/src/product && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p4/marketplace/src/product/product.cc > CMakeFiles/product.dir/product.cc.i

src/product/CMakeFiles/product.dir/product.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/product.dir/product.cc.s"
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p4/marketplace/build/src/product && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p4/marketplace/src/product/product.cc -o CMakeFiles/product.dir/product.cc.s

# Object files for target product
product_OBJECTS = \
"CMakeFiles/product.dir/product.cc.o"

# External object files for target product
product_EXTERNAL_OBJECTS =

src/product/libproduct.a: src/product/CMakeFiles/product.dir/product.cc.o
src/product/libproduct.a: src/product/CMakeFiles/product.dir/build.make
src/product/libproduct.a: src/product/CMakeFiles/product.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p4/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libproduct.a"
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p4/marketplace/build/src/product && $(CMAKE_COMMAND) -P CMakeFiles/product.dir/cmake_clean_target.cmake
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p4/marketplace/build/src/product && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/product.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/product/CMakeFiles/product.dir/build: src/product/libproduct.a
.PHONY : src/product/CMakeFiles/product.dir/build

src/product/CMakeFiles/product.dir/clean:
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p4/marketplace/build/src/product && $(CMAKE_COMMAND) -P CMakeFiles/product.dir/cmake_clean.cmake
.PHONY : src/product/CMakeFiles/product.dir/clean

src/product/CMakeFiles/product.dir/depend:
	cd /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p4/marketplace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p4/marketplace /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p4/marketplace/src/product /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p4/marketplace/build /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p4/marketplace/build/src/product /home/rafa/Escritorio/Ingenieria-informatica-UCO/poo/p4/marketplace/build/src/product/CMakeFiles/product.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/product/CMakeFiles/product.dir/depend

