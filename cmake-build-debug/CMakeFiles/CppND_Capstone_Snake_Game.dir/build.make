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
CMAKE_COMMAND = /opt/clion-2019.1.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.1.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xilinx/github/CppND-Capstone-Snake-Game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xilinx/github/CppND-Capstone-Snake-Game/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CppND_Capstone_Snake_Game.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CppND_Capstone_Snake_Game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CppND_Capstone_Snake_Game.dir/flags.make

CMakeFiles/CppND_Capstone_Snake_Game.dir/src/controller.cpp.o: CMakeFiles/CppND_Capstone_Snake_Game.dir/flags.make
CMakeFiles/CppND_Capstone_Snake_Game.dir/src/controller.cpp.o: ../src/controller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xilinx/github/CppND-Capstone-Snake-Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CppND_Capstone_Snake_Game.dir/src/controller.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CppND_Capstone_Snake_Game.dir/src/controller.cpp.o -c /home/xilinx/github/CppND-Capstone-Snake-Game/src/controller.cpp

CMakeFiles/CppND_Capstone_Snake_Game.dir/src/controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppND_Capstone_Snake_Game.dir/src/controller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xilinx/github/CppND-Capstone-Snake-Game/src/controller.cpp > CMakeFiles/CppND_Capstone_Snake_Game.dir/src/controller.cpp.i

CMakeFiles/CppND_Capstone_Snake_Game.dir/src/controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppND_Capstone_Snake_Game.dir/src/controller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xilinx/github/CppND-Capstone-Snake-Game/src/controller.cpp -o CMakeFiles/CppND_Capstone_Snake_Game.dir/src/controller.cpp.s

CMakeFiles/CppND_Capstone_Snake_Game.dir/src/game.cpp.o: CMakeFiles/CppND_Capstone_Snake_Game.dir/flags.make
CMakeFiles/CppND_Capstone_Snake_Game.dir/src/game.cpp.o: ../src/game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xilinx/github/CppND-Capstone-Snake-Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CppND_Capstone_Snake_Game.dir/src/game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CppND_Capstone_Snake_Game.dir/src/game.cpp.o -c /home/xilinx/github/CppND-Capstone-Snake-Game/src/game.cpp

CMakeFiles/CppND_Capstone_Snake_Game.dir/src/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppND_Capstone_Snake_Game.dir/src/game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xilinx/github/CppND-Capstone-Snake-Game/src/game.cpp > CMakeFiles/CppND_Capstone_Snake_Game.dir/src/game.cpp.i

CMakeFiles/CppND_Capstone_Snake_Game.dir/src/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppND_Capstone_Snake_Game.dir/src/game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xilinx/github/CppND-Capstone-Snake-Game/src/game.cpp -o CMakeFiles/CppND_Capstone_Snake_Game.dir/src/game.cpp.s

CMakeFiles/CppND_Capstone_Snake_Game.dir/src/main.cpp.o: CMakeFiles/CppND_Capstone_Snake_Game.dir/flags.make
CMakeFiles/CppND_Capstone_Snake_Game.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xilinx/github/CppND-Capstone-Snake-Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CppND_Capstone_Snake_Game.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CppND_Capstone_Snake_Game.dir/src/main.cpp.o -c /home/xilinx/github/CppND-Capstone-Snake-Game/src/main.cpp

CMakeFiles/CppND_Capstone_Snake_Game.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppND_Capstone_Snake_Game.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xilinx/github/CppND-Capstone-Snake-Game/src/main.cpp > CMakeFiles/CppND_Capstone_Snake_Game.dir/src/main.cpp.i

CMakeFiles/CppND_Capstone_Snake_Game.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppND_Capstone_Snake_Game.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xilinx/github/CppND-Capstone-Snake-Game/src/main.cpp -o CMakeFiles/CppND_Capstone_Snake_Game.dir/src/main.cpp.s

CMakeFiles/CppND_Capstone_Snake_Game.dir/src/renderer.cpp.o: CMakeFiles/CppND_Capstone_Snake_Game.dir/flags.make
CMakeFiles/CppND_Capstone_Snake_Game.dir/src/renderer.cpp.o: ../src/renderer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xilinx/github/CppND-Capstone-Snake-Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/CppND_Capstone_Snake_Game.dir/src/renderer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CppND_Capstone_Snake_Game.dir/src/renderer.cpp.o -c /home/xilinx/github/CppND-Capstone-Snake-Game/src/renderer.cpp

CMakeFiles/CppND_Capstone_Snake_Game.dir/src/renderer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppND_Capstone_Snake_Game.dir/src/renderer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xilinx/github/CppND-Capstone-Snake-Game/src/renderer.cpp > CMakeFiles/CppND_Capstone_Snake_Game.dir/src/renderer.cpp.i

CMakeFiles/CppND_Capstone_Snake_Game.dir/src/renderer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppND_Capstone_Snake_Game.dir/src/renderer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xilinx/github/CppND-Capstone-Snake-Game/src/renderer.cpp -o CMakeFiles/CppND_Capstone_Snake_Game.dir/src/renderer.cpp.s

CMakeFiles/CppND_Capstone_Snake_Game.dir/src/snake.cpp.o: CMakeFiles/CppND_Capstone_Snake_Game.dir/flags.make
CMakeFiles/CppND_Capstone_Snake_Game.dir/src/snake.cpp.o: ../src/snake.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xilinx/github/CppND-Capstone-Snake-Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/CppND_Capstone_Snake_Game.dir/src/snake.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CppND_Capstone_Snake_Game.dir/src/snake.cpp.o -c /home/xilinx/github/CppND-Capstone-Snake-Game/src/snake.cpp

CMakeFiles/CppND_Capstone_Snake_Game.dir/src/snake.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppND_Capstone_Snake_Game.dir/src/snake.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xilinx/github/CppND-Capstone-Snake-Game/src/snake.cpp > CMakeFiles/CppND_Capstone_Snake_Game.dir/src/snake.cpp.i

CMakeFiles/CppND_Capstone_Snake_Game.dir/src/snake.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppND_Capstone_Snake_Game.dir/src/snake.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xilinx/github/CppND-Capstone-Snake-Game/src/snake.cpp -o CMakeFiles/CppND_Capstone_Snake_Game.dir/src/snake.cpp.s

# Object files for target CppND_Capstone_Snake_Game
CppND_Capstone_Snake_Game_OBJECTS = \
"CMakeFiles/CppND_Capstone_Snake_Game.dir/src/controller.cpp.o" \
"CMakeFiles/CppND_Capstone_Snake_Game.dir/src/game.cpp.o" \
"CMakeFiles/CppND_Capstone_Snake_Game.dir/src/main.cpp.o" \
"CMakeFiles/CppND_Capstone_Snake_Game.dir/src/renderer.cpp.o" \
"CMakeFiles/CppND_Capstone_Snake_Game.dir/src/snake.cpp.o"

# External object files for target CppND_Capstone_Snake_Game
CppND_Capstone_Snake_Game_EXTERNAL_OBJECTS =

CppND_Capstone_Snake_Game: CMakeFiles/CppND_Capstone_Snake_Game.dir/src/controller.cpp.o
CppND_Capstone_Snake_Game: CMakeFiles/CppND_Capstone_Snake_Game.dir/src/game.cpp.o
CppND_Capstone_Snake_Game: CMakeFiles/CppND_Capstone_Snake_Game.dir/src/main.cpp.o
CppND_Capstone_Snake_Game: CMakeFiles/CppND_Capstone_Snake_Game.dir/src/renderer.cpp.o
CppND_Capstone_Snake_Game: CMakeFiles/CppND_Capstone_Snake_Game.dir/src/snake.cpp.o
CppND_Capstone_Snake_Game: CMakeFiles/CppND_Capstone_Snake_Game.dir/build.make
CppND_Capstone_Snake_Game: CMakeFiles/CppND_Capstone_Snake_Game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xilinx/github/CppND-Capstone-Snake-Game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable CppND_Capstone_Snake_Game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CppND_Capstone_Snake_Game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CppND_Capstone_Snake_Game.dir/build: CppND_Capstone_Snake_Game

.PHONY : CMakeFiles/CppND_Capstone_Snake_Game.dir/build

CMakeFiles/CppND_Capstone_Snake_Game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CppND_Capstone_Snake_Game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CppND_Capstone_Snake_Game.dir/clean

CMakeFiles/CppND_Capstone_Snake_Game.dir/depend:
	cd /home/xilinx/github/CppND-Capstone-Snake-Game/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xilinx/github/CppND-Capstone-Snake-Game /home/xilinx/github/CppND-Capstone-Snake-Game /home/xilinx/github/CppND-Capstone-Snake-Game/cmake-build-debug /home/xilinx/github/CppND-Capstone-Snake-Game/cmake-build-debug /home/xilinx/github/CppND-Capstone-Snake-Game/cmake-build-debug/CMakeFiles/CppND_Capstone_Snake_Game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CppND_Capstone_Snake_Game.dir/depend

