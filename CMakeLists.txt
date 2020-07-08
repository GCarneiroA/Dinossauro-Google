
cmake_minimum_required(VERSION 3.17)

project(Dino)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_subdirectory(src)
