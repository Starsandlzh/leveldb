# cmake_minimum_required(VERSION <specify CMake version here>)
project(test)

cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 11)

add_executable(test
        kdtree.c
        kdtree.h
        main.cpp kd_index.h kd_index.cpp)