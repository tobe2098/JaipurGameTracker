# Minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Project name
project(Jaipur)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/Jaipur/bin)

# Set the C standard (optional, but recommended)
set(CMAKE_C_STANDARD 17)

# Add the src directory
add_subdirectory(src)
