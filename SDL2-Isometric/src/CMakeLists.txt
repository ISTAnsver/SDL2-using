cmake_minimum_required(VERSION 3.11)

target_sources(SDL2-Isometric PUBLIC ${CMAKE_CURRENT_LIST_DIR}/main.cpp)

include(src/World/CMakeLists.txt)
include(src/Game/CMakeLists.txt)
include(src/Application/CMakeLists.txt)