cmake_minimum_required(VERSION 3.14)
project(c_on_linux_ex3 C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(substitution src/main.c include/substitute.h src/substitute.c)