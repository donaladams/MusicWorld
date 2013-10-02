# The name of our project is "MusicWorld". CMakeLists files in this project can 
# refer to the root source directory of the project as ${MUSICWORD_SOURCE_DIR} and 
# to the root binary directory of the project as ${MUSICWORD_BINARY_DIR}.

cmake_minimum_required (VERSION 2.6)
project (MUSICWORLD)

set(CMAKE_CXX_FLAGS                "-Wall -stdlib=libc++ -std=c++11")

add_subdirectory (Harmony)
add_subdirectory (Runner)