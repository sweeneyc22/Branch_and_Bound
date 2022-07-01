cmake_minimum_required(VERSION 3.22)
project(Branch_Bound)

set(CMAKE_CXX_STANDARD 14)

add_executable(Branch_Bound main.cpp bruteForce.cpp bruteForce.h greedy.cpp greedy.h)
