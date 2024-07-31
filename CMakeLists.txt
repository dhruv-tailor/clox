CMAKE_MINIMUM_REQUIRED(VERSION 3.30)

project(clox VERSION 1.0 LANGUAGES C)

# Collect all source files and header files in the src directory and its subdirectories
file(GLOB_RECURSE SOURCES "src/*.c")
file(GLOB_RECURSE HEADERS "src/headers/*.h")

# Define the executable and its source files
add_executable(clox ${SOURCES})

# Optionally, add headers to the IDE or documentation tools
source_group("Header Files" FILES ${HEADERS})
