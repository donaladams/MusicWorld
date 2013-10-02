
include_directories (${MUSICWORLD_SOURCE_DIR}/Harmony/include)

link_directories (${MUSICWORLD_BINARY_DIR}/Harmony)

add_executable (Runner Runner.cpp)

# Link the executable to the Hello library.
target_link_libraries (Runner Harmony) 