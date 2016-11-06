#CMakeLists.txt

cmake_minimum_required(VERSION 3.6)
project(cpp-cs)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

set(SOURCE_FILES test/test_hashmap.cpp )
add_executable(test_hashmap ${SOURCE_FILES})
add_executable(test_hashentry test/test_hashentry.cpp)
add_executable(test_queue test/test_queue.cpp)
add_executable(test_linked_list test/test_linked_list.cpp)