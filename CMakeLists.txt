cmake_minimum_required(VERSION 2.8)

project(ogl_tutorials)

find_package(OpenGL REQUIRED)

set (CMAKE_CXX_FLAGS "-std=gnu++14 -Wall -g -Werror")
set (CMAKE_C_FLAGS "-Wall -g")

set (CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set (EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set (LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

add_subdirectory(third_party)
add_subdirectory(src)
