# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /cygdrive/c/Users/Administrator/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Administrator/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/d/CSProjects

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/CSProjects/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CSProjects.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CSProjects.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CSProjects.dir/flags.make

CMakeFiles/CSProjects.dir/main.c.o: CMakeFiles/CSProjects.dir/flags.make
CMakeFiles/CSProjects.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/CSProjects/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CSProjects.dir/main.c.o"
	D:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CSProjects.dir/main.c.o   -c /cygdrive/d/CSProjects/main.c

CMakeFiles/CSProjects.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CSProjects.dir/main.c.i"
	D:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/d/CSProjects/main.c > CMakeFiles/CSProjects.dir/main.c.i

CMakeFiles/CSProjects.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CSProjects.dir/main.c.s"
	D:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/d/CSProjects/main.c -o CMakeFiles/CSProjects.dir/main.c.s

CMakeFiles/CSProjects.dir/main.c.o.requires:

.PHONY : CMakeFiles/CSProjects.dir/main.c.o.requires

CMakeFiles/CSProjects.dir/main.c.o.provides: CMakeFiles/CSProjects.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/CSProjects.dir/build.make CMakeFiles/CSProjects.dir/main.c.o.provides.build
.PHONY : CMakeFiles/CSProjects.dir/main.c.o.provides

CMakeFiles/CSProjects.dir/main.c.o.provides.build: CMakeFiles/CSProjects.dir/main.c.o


CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.o: CMakeFiles/CSProjects.dir/flags.make
CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.o: ../Unit_1/unit_1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/CSProjects/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.o"
	D:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.o   -c /cygdrive/d/CSProjects/Unit_1/unit_1.c

CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.i"
	D:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/d/CSProjects/Unit_1/unit_1.c > CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.i

CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.s"
	D:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/d/CSProjects/Unit_1/unit_1.c -o CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.s

CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.o.requires:

.PHONY : CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.o.requires

CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.o.provides: CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.o.requires
	$(MAKE) -f CMakeFiles/CSProjects.dir/build.make CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.o.provides.build
.PHONY : CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.o.provides

CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.o.provides.build: CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.o


# Object files for target CSProjects
CSProjects_OBJECTS = \
"CMakeFiles/CSProjects.dir/main.c.o" \
"CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.o"

# External object files for target CSProjects
CSProjects_EXTERNAL_OBJECTS =

CSProjects.exe: CMakeFiles/CSProjects.dir/main.c.o
CSProjects.exe: CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.o
CSProjects.exe: CMakeFiles/CSProjects.dir/build.make
CSProjects.exe: CMakeFiles/CSProjects.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/CSProjects/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable CSProjects.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CSProjects.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CSProjects.dir/build: CSProjects.exe

.PHONY : CMakeFiles/CSProjects.dir/build

CMakeFiles/CSProjects.dir/requires: CMakeFiles/CSProjects.dir/main.c.o.requires
CMakeFiles/CSProjects.dir/requires: CMakeFiles/CSProjects.dir/Unit_1/unit_1.c.o.requires

.PHONY : CMakeFiles/CSProjects.dir/requires

CMakeFiles/CSProjects.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CSProjects.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CSProjects.dir/clean

CMakeFiles/CSProjects.dir/depend:
	cd /cygdrive/d/CSProjects/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/CSProjects /cygdrive/d/CSProjects /cygdrive/d/CSProjects/cmake-build-debug /cygdrive/d/CSProjects/cmake-build-debug /cygdrive/d/CSProjects/cmake-build-debug/CMakeFiles/CSProjects.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CSProjects.dir/depend
