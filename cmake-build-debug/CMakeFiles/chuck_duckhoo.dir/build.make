# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = "/Users/wonha/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/202.7660.37/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/wonha/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/202.7660.37/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/wonha/Documents/GitHub/chuck-duckhoo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/wonha/Documents/GitHub/chuck-duckhoo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/chuck_duckhoo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/chuck_duckhoo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chuck_duckhoo.dir/flags.make

CMakeFiles/chuck_duckhoo.dir/main.cpp.o: CMakeFiles/chuck_duckhoo.dir/flags.make
CMakeFiles/chuck_duckhoo.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wonha/Documents/GitHub/chuck-duckhoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/chuck_duckhoo.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chuck_duckhoo.dir/main.cpp.o -c /Users/wonha/Documents/GitHub/chuck-duckhoo/main.cpp

CMakeFiles/chuck_duckhoo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chuck_duckhoo.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wonha/Documents/GitHub/chuck-duckhoo/main.cpp > CMakeFiles/chuck_duckhoo.dir/main.cpp.i

CMakeFiles/chuck_duckhoo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chuck_duckhoo.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wonha/Documents/GitHub/chuck-duckhoo/main.cpp -o CMakeFiles/chuck_duckhoo.dir/main.cpp.s

# Object files for target chuck_duckhoo
chuck_duckhoo_OBJECTS = \
"CMakeFiles/chuck_duckhoo.dir/main.cpp.o"

# External object files for target chuck_duckhoo
chuck_duckhoo_EXTERNAL_OBJECTS =

chuck_duckhoo: CMakeFiles/chuck_duckhoo.dir/main.cpp.o
chuck_duckhoo: CMakeFiles/chuck_duckhoo.dir/build.make
chuck_duckhoo: CMakeFiles/chuck_duckhoo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wonha/Documents/GitHub/chuck-duckhoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable chuck_duckhoo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chuck_duckhoo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chuck_duckhoo.dir/build: chuck_duckhoo

.PHONY : CMakeFiles/chuck_duckhoo.dir/build

CMakeFiles/chuck_duckhoo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/chuck_duckhoo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/chuck_duckhoo.dir/clean

CMakeFiles/chuck_duckhoo.dir/depend:
	cd /Users/wonha/Documents/GitHub/chuck-duckhoo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wonha/Documents/GitHub/chuck-duckhoo /Users/wonha/Documents/GitHub/chuck-duckhoo /Users/wonha/Documents/GitHub/chuck-duckhoo/cmake-build-debug /Users/wonha/Documents/GitHub/chuck-duckhoo/cmake-build-debug /Users/wonha/Documents/GitHub/chuck-duckhoo/cmake-build-debug/CMakeFiles/chuck_duckhoo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chuck_duckhoo.dir/depend

