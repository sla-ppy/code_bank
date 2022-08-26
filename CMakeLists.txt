# cmake_minimum_required(VERSION <specify CMake version here>)
project(code_bank)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic")

add_executable(code_bank
        0_code_signal/0006_almostIncreasingSequence.cpp
        )
