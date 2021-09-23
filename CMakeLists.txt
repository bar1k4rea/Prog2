cmake_minimum_required(VERSION 3.20)
project(Prog2)

set(CMAKE_CXX_STANDARD 20)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

add_executable(Prog2 main.cpp menu.h menu.cpp)

include(FindPkgConfig)
find_package(Strophoid REQUIRED)
include_directories(${STROPHOID_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} ${STROPHOID_LIBRARY})