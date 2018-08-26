cmake_minimum_required(VERSION 3.11)

target_sources(SDL2-Isometric PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/Cell.cpp
    ${CMAKE_CURRENT_LIST_DIR}/Map.cpp
    ${CMAKE_CURRENT_LIST_DIR}/WorldIsometric.cpp)