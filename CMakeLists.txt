cmake_minimum_required(VERSION 3.10)
project(bitfetch)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)
add_executable(bitfetch src/main.cpp)
