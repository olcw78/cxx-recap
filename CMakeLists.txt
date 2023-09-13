# root
cmake_minimum_required(VERSION 3.26)
project(recap)

set(CMAKE_CXX_STANDARD 20
        LANGUAGES CXX)

include(var.cmake)

# prerequisites
#add_subdirectory(extern)

# source
add_subdirectory(src)
