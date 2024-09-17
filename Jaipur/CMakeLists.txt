cmake_minimum_required(VERSION 3.10)

# Set the project name
project(JaipurGame)

# Set the output directory for the executable
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Include the src directory to build the sources
add_subdirectory(src)

# Optionally set compiler flags here
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")
