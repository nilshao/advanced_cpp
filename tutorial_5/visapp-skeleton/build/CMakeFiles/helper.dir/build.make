# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.14.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.14.4/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton/build

# Include any dependencies generated for this target.
include CMakeFiles/helper.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/helper.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/helper.dir/flags.make

CMakeFiles/helper.dir/src/helper.cpp.o: CMakeFiles/helper.dir/flags.make
CMakeFiles/helper.dir/src/helper.cpp.o: ../src/helper.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/helper.dir/src/helper.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/helper.dir/src/helper.cpp.o -c /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton/src/helper.cpp

CMakeFiles/helper.dir/src/helper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/helper.dir/src/helper.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton/src/helper.cpp > CMakeFiles/helper.dir/src/helper.cpp.i

CMakeFiles/helper.dir/src/helper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/helper.dir/src/helper.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton/src/helper.cpp -o CMakeFiles/helper.dir/src/helper.cpp.s

# Object files for target helper
helper_OBJECTS = \
"CMakeFiles/helper.dir/src/helper.cpp.o"

# External object files for target helper
helper_EXTERNAL_OBJECTS =

libhelper.a: CMakeFiles/helper.dir/src/helper.cpp.o
libhelper.a: CMakeFiles/helper.dir/build.make
libhelper.a: CMakeFiles/helper.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libhelper.a"
	$(CMAKE_COMMAND) -P CMakeFiles/helper.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/helper.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/helper.dir/build: libhelper.a

.PHONY : CMakeFiles/helper.dir/build

CMakeFiles/helper.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/helper.dir/cmake_clean.cmake
.PHONY : CMakeFiles/helper.dir/clean

CMakeFiles/helper.dir/depend:
	cd /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton/build /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton/build /Users/sibohao/Desktop/advanced_cpp/tutorial_5/visapp-skeleton/build/CMakeFiles/helper.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/helper.dir/depend

