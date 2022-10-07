cmake_minimum_required(VERSION 3.20)
project(demo01 C)

set(CMAKE_C_STANDARD 99)

add_executable(demo01 main.c sum.c sum.h)
