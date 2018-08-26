cmake_minimum_required(VERSION 3.11)

project(SDL2-Isometric)

set(SDL2_DIR ../lib/SDL2-2.0.8)

find_package(SDL2)

include_directories(${SDL2_INCLUDE_DIRS} include)

add_executable(SDL2-Isometric "")
include(src/CMakeLists.txt)
target_link_libraries(SDL2-Isometric ${SDL2_LIBRARIES} -lgdi32)
add_custom_command(TARGET SDL2-Isometric POST_BUILD 
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    "../../lib/SDL2-2.0.8/bin/x64/SDL2.dll"            
     $<TARGET_FILE_DIR:${CMAKE_PROJECT_NAME}>)

add_custom_command(TARGET SDL2-Isometric POST_BUILD 
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    "../resources"            
    $<TARGET_FILE_DIR:${CMAKE_PROJECT_NAME}>)