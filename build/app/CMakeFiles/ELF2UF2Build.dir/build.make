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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/eclipse/desktop/vgm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/eclipse/desktop/vgm/build

# Utility rule file for ELF2UF2Build.

# Include any custom commands dependencies for this target.
include app/CMakeFiles/ELF2UF2Build.dir/compiler_depend.make

# Include the progress variables for this target.
include app/CMakeFiles/ELF2UF2Build.dir/progress.make

app/CMakeFiles/ELF2UF2Build: app/CMakeFiles/ELF2UF2Build-complete

app/CMakeFiles/ELF2UF2Build-complete: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-install
app/CMakeFiles/ELF2UF2Build-complete: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-mkdir
app/CMakeFiles/ELF2UF2Build-complete: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-download
app/CMakeFiles/ELF2UF2Build-complete: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-update
app/CMakeFiles/ELF2UF2Build-complete: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-patch
app/CMakeFiles/ELF2UF2Build-complete: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-configure
app/CMakeFiles/ELF2UF2Build-complete: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-build
app/CMakeFiles/ELF2UF2Build-complete: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-install
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/eclipse/desktop/vgm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'ELF2UF2Build'"
	cd /Users/eclipse/desktop/vgm/build/app && /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake -E make_directory /Users/eclipse/desktop/vgm/build/app/CMakeFiles
	cd /Users/eclipse/desktop/vgm/build/app && /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake -E touch /Users/eclipse/desktop/vgm/build/app/CMakeFiles/ELF2UF2Build-complete
	cd /Users/eclipse/desktop/vgm/build/app && /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake -E touch /Users/eclipse/desktop/vgm/build/app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-done

app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-build: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/eclipse/desktop/vgm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Performing build step for 'ELF2UF2Build'"
	cd /Users/eclipse/desktop/vgm/build/elf2uf2 && $(MAKE)

app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-configure: app/elf2uf2/tmp/ELF2UF2Build-cfgcmd.txt
app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-configure: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/eclipse/desktop/vgm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Performing configure step for 'ELF2UF2Build'"
	cd /Users/eclipse/desktop/vgm/build/elf2uf2 && /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake -DCMAKE_MAKE_PROGRAM:FILEPATH=/usr/bin/make "-GUnix Makefiles" -S /Users/eclipse/Desktop/vgm/lib/pico_sdk/tools/elf2uf2 -B /Users/eclipse/desktop/vgm/build/elf2uf2
	cd /Users/eclipse/desktop/vgm/build/elf2uf2 && /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake -E touch /Users/eclipse/desktop/vgm/build/app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-configure

app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-download: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-source_dirinfo.txt
app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-download: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/eclipse/desktop/vgm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "No download step for 'ELF2UF2Build'"
	cd /Users/eclipse/desktop/vgm/build/app && /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake -E echo_append
	cd /Users/eclipse/desktop/vgm/build/app && /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake -E touch /Users/eclipse/desktop/vgm/build/app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-download

app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-install: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-build
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/eclipse/desktop/vgm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No install step for 'ELF2UF2Build'"
	cd /Users/eclipse/desktop/vgm/build/elf2uf2 && /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake -E echo_append

app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/eclipse/desktop/vgm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'ELF2UF2Build'"
	cd /Users/eclipse/desktop/vgm/build/app && /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake -Dcfgdir= -P /Users/eclipse/desktop/vgm/build/app/elf2uf2/tmp/ELF2UF2Build-mkdirs.cmake
	cd /Users/eclipse/desktop/vgm/build/app && /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake -E touch /Users/eclipse/desktop/vgm/build/app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-mkdir

app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-patch: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-patch-info.txt
app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-patch: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-update
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/eclipse/desktop/vgm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'ELF2UF2Build'"
	cd /Users/eclipse/desktop/vgm/build/app && /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake -E echo_append
	cd /Users/eclipse/desktop/vgm/build/app && /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake -E touch /Users/eclipse/desktop/vgm/build/app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-patch

app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-update: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-update-info.txt
app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-update: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-download
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/eclipse/desktop/vgm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No update step for 'ELF2UF2Build'"
	cd /Users/eclipse/desktop/vgm/build/app && /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake -E echo_append
	cd /Users/eclipse/desktop/vgm/build/app && /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake -E touch /Users/eclipse/desktop/vgm/build/app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-update

ELF2UF2Build: app/CMakeFiles/ELF2UF2Build
ELF2UF2Build: app/CMakeFiles/ELF2UF2Build-complete
ELF2UF2Build: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-build
ELF2UF2Build: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-configure
ELF2UF2Build: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-download
ELF2UF2Build: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-install
ELF2UF2Build: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-mkdir
ELF2UF2Build: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-patch
ELF2UF2Build: app/elf2uf2/src/ELF2UF2Build-stamp/ELF2UF2Build-update
ELF2UF2Build: app/CMakeFiles/ELF2UF2Build.dir/build.make
.PHONY : ELF2UF2Build

# Rule to build all files generated by this target.
app/CMakeFiles/ELF2UF2Build.dir/build: ELF2UF2Build
.PHONY : app/CMakeFiles/ELF2UF2Build.dir/build

app/CMakeFiles/ELF2UF2Build.dir/clean:
	cd /Users/eclipse/desktop/vgm/build/app && $(CMAKE_COMMAND) -P CMakeFiles/ELF2UF2Build.dir/cmake_clean.cmake
.PHONY : app/CMakeFiles/ELF2UF2Build.dir/clean

app/CMakeFiles/ELF2UF2Build.dir/depend:
	cd /Users/eclipse/desktop/vgm/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/eclipse/desktop/vgm /Users/eclipse/desktop/vgm/app /Users/eclipse/desktop/vgm/build /Users/eclipse/desktop/vgm/build/app /Users/eclipse/desktop/vgm/build/app/CMakeFiles/ELF2UF2Build.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : app/CMakeFiles/ELF2UF2Build.dir/depend
