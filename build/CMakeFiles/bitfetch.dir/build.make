# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/rodrigo/misc/ctf-lab/bitfetch

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rodrigo/misc/ctf-lab/bitfetch/build

# Include any dependencies generated for this target.
include CMakeFiles/bitfetch.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/bitfetch.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/bitfetch.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bitfetch.dir/flags.make

CMakeFiles/bitfetch.dir/src/main.cpp.o: CMakeFiles/bitfetch.dir/flags.make
CMakeFiles/bitfetch.dir/src/main.cpp.o: /home/rodrigo/misc/ctf-lab/bitfetch/src/main.cpp
CMakeFiles/bitfetch.dir/src/main.cpp.o: CMakeFiles/bitfetch.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/rodrigo/misc/ctf-lab/bitfetch/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bitfetch.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bitfetch.dir/src/main.cpp.o -MF CMakeFiles/bitfetch.dir/src/main.cpp.o.d -o CMakeFiles/bitfetch.dir/src/main.cpp.o -c /home/rodrigo/misc/ctf-lab/bitfetch/src/main.cpp

CMakeFiles/bitfetch.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/bitfetch.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rodrigo/misc/ctf-lab/bitfetch/src/main.cpp > CMakeFiles/bitfetch.dir/src/main.cpp.i

CMakeFiles/bitfetch.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/bitfetch.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rodrigo/misc/ctf-lab/bitfetch/src/main.cpp -o CMakeFiles/bitfetch.dir/src/main.cpp.s

# Object files for target bitfetch
bitfetch_OBJECTS = \
"CMakeFiles/bitfetch.dir/src/main.cpp.o"

# External object files for target bitfetch
bitfetch_EXTERNAL_OBJECTS =

bin/bitfetch: CMakeFiles/bitfetch.dir/src/main.cpp.o
bin/bitfetch: CMakeFiles/bitfetch.dir/build.make
bin/bitfetch: CMakeFiles/bitfetch.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/rodrigo/misc/ctf-lab/bitfetch/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/bitfetch"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bitfetch.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bitfetch.dir/build: bin/bitfetch
.PHONY : CMakeFiles/bitfetch.dir/build

CMakeFiles/bitfetch.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bitfetch.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bitfetch.dir/clean

CMakeFiles/bitfetch.dir/depend:
	cd /home/rodrigo/misc/ctf-lab/bitfetch/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rodrigo/misc/ctf-lab/bitfetch /home/rodrigo/misc/ctf-lab/bitfetch /home/rodrigo/misc/ctf-lab/bitfetch/build /home/rodrigo/misc/ctf-lab/bitfetch/build /home/rodrigo/misc/ctf-lab/bitfetch/build/CMakeFiles/bitfetch.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/bitfetch.dir/depend

