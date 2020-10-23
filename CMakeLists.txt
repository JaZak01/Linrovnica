cmake_minimum_required(VERSION 3.17)
project(linrovnica)

set(CMAKE_CXX_STANDARD 14)

add_compile_options(-Wall -Werror)
add_executable(linrovnica main.cpp hlava.h)