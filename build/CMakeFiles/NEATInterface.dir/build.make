# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/andrew/Documents/dev/PandoraNEAT/NEAT

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/andrew/Documents/dev/PandoraNEAT/NEAT/build

# Include any dependencies generated for this target.
include CMakeFiles/NEATInterface.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/NEATInterface.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NEATInterface.dir/flags.make

CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.o: CMakeFiles/NEATInterface.dir/flags.make
CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.o: ../test/NEATInterface.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andrew/Documents/dev/PandoraNEAT/NEAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.o -c /home/andrew/Documents/dev/PandoraNEAT/NEAT/test/NEATInterface.cxx

CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andrew/Documents/dev/PandoraNEAT/NEAT/test/NEATInterface.cxx > CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.i

CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andrew/Documents/dev/PandoraNEAT/NEAT/test/NEATInterface.cxx -o CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.s

CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.o.requires:

.PHONY : CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.o.requires

CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.o.provides: CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.o.requires
	$(MAKE) -f CMakeFiles/NEATInterface.dir/build.make CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.o.provides.build
.PHONY : CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.o.provides

CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.o.provides.build: CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.o


# Object files for target NEATInterface
NEATInterface_OBJECTS = \
"CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.o"

# External object files for target NEATInterface
NEATInterface_EXTERNAL_OBJECTS =

NEATInterface: CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.o
NEATInterface: CMakeFiles/NEATInterface.dir/build.make
NEATInterface: libNEAT.so
NEATInterface: CMakeFiles/NEATInterface.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/andrew/Documents/dev/PandoraNEAT/NEAT/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable NEATInterface"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NEATInterface.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NEATInterface.dir/build: NEATInterface

.PHONY : CMakeFiles/NEATInterface.dir/build

CMakeFiles/NEATInterface.dir/requires: CMakeFiles/NEATInterface.dir/test/NEATInterface.cxx.o.requires

.PHONY : CMakeFiles/NEATInterface.dir/requires

CMakeFiles/NEATInterface.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NEATInterface.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NEATInterface.dir/clean

CMakeFiles/NEATInterface.dir/depend:
	cd /home/andrew/Documents/dev/PandoraNEAT/NEAT/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/andrew/Documents/dev/PandoraNEAT/NEAT /home/andrew/Documents/dev/PandoraNEAT/NEAT /home/andrew/Documents/dev/PandoraNEAT/NEAT/build /home/andrew/Documents/dev/PandoraNEAT/NEAT/build /home/andrew/Documents/dev/PandoraNEAT/NEAT/build/CMakeFiles/NEATInterface.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NEATInterface.dir/depend

