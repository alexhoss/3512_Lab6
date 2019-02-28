cmake_minimum_required(VERSION 3.13)
project(3512_Lab6)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")

add_executable(3512_Lab6 main.cpp Dictionary.cpp Dictionary.hpp Helpers.cpp Helpers.hpp)