
cmake_minimum_required(VERSION 3.17)

project(Dino)

find_package(Pig REQUIRED)
include_directories(${PIG_INCLUDE_DIR})

add_subdirectory(src)
