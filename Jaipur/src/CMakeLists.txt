# Set flags for all configurations
set(CMAKE_C_FLAGS "-Wall -Wextra -pedantic")

# Set flags specifically for Debug builds
set(CMAKE_C_FLAGS_DEBUG "-g -O0")

# Set flags specifically for Release builds
set(CMAKE_C_FLAGS_RELEASE "-O3 -DNDEBUG")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/)

# Add executable target
add_executable(jaipur
    jaipur.c          # Main file
    game_data.c       # Source files
    utils.c
    game_constants.c
)

# Include directories (for header files)
target_include_directories(jaipur PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
