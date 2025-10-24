cmake_minimum_required(VERSION 4.0)
project(Dynamic_programming)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Dynamic_programming
        Knapsack.h
        main.cpp
        SlidingWindow.h
        LCS.h
        Fibonacci.h
        LIS.h
        Levenstein.h)
