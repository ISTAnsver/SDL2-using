cmake_minimum_required(VERSION 3.11)

target_sources(SDL2-CursorInteraction PUBLIC ${CMAKE_CURRENT_LIST_DIR}/main.cpp)

include(src/Application/CMakeLists.txt)