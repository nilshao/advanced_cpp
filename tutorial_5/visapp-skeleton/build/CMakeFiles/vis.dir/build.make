# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.19.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.19.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton/build

# Include any dependencies generated for this target.
include CMakeFiles/vis.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/vis.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vis.dir/flags.make

CMakeFiles/vis.dir/src/vis_app.cpp.o: CMakeFiles/vis.dir/flags.make
CMakeFiles/vis.dir/src/vis_app.cpp.o: ../src/vis_app.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vis.dir/src/vis_app.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vis.dir/src/vis_app.cpp.o -c /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton/src/vis_app.cpp

CMakeFiles/vis.dir/src/vis_app.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vis.dir/src/vis_app.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton/src/vis_app.cpp > CMakeFiles/vis.dir/src/vis_app.cpp.i

CMakeFiles/vis.dir/src/vis_app.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vis.dir/src/vis_app.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton/src/vis_app.cpp -o CMakeFiles/vis.dir/src/vis_app.cpp.s

# Object files for target vis
vis_OBJECTS = \
"CMakeFiles/vis.dir/src/vis_app.cpp.o"

# External object files for target vis
vis_EXTERNAL_OBJECTS =

../bin/vis: CMakeFiles/vis.dir/src/vis_app.cpp.o
../bin/vis: CMakeFiles/vis.dir/build.make
../bin/vis: CMakeFiles/vis.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/vis"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vis.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vis.dir/build: ../bin/vis

.PHONY : CMakeFiles/vis.dir/build

CMakeFiles/vis.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vis.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vis.dir/clean

CMakeFiles/vis.dir/depend:
	cd /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton/build /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton/build /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton/build/CMakeFiles/vis.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vis.dir/depend

