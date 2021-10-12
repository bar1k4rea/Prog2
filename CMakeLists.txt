cmake_minimum_required(VERSION 3.20)
project(Prog2)

set(CMAKE_CXX_STANDARD 20)

link_directories(/home/bar1k/Library/strophoid/lib)

add_executable(Prog2 main.cpp menu.h menu.cpp)

target_link_libraries(Prog2 LINK_PUBLIC libstrophoid.a)
