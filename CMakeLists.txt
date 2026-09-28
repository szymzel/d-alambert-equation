cmake_minimum_required(VERSION 3.20)
project(dalambert_equation CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(raylib REQUIRED)

add_executable(program
    main.cpp
    board.cpp
    step.cpp
)

target_link_libraries(program PRIVATE raylib)
