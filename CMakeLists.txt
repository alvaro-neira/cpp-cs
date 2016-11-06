cmake_minimum_required(VERSION 3.6)
project(cpp-cs)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

set(SOURCE_FILES test/test_hashmap.cpp )
add_executable(test_hashmap ${SOURCE_FILES})