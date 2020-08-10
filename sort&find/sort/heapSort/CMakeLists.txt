cmake_minimum_required(VERSION 3.15)
project(heapSort)

set(CMAKE_CXX_STANDARD 14)

add_library(heap_sort
        heapSort.cpp
        heapSort.h)

add_executable(heapSort
        main.cpp)

target_link_libraries(heapSort
        heap_sort)