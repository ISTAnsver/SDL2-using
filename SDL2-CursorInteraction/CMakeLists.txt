cmake_minimum_required(VERSION 3.11)

project(SDL2-CursorInteraction)

set(SDL2_DIR ../lib/SDL2-2.0.8)

find_package(SDL2)

include_directories(${SDL2_INCLUDE_DIRS} includes)

add_executable(SDL2-CursorInteraction "")
include(src/CMakeLists.txt)
target_link_libraries(SDL2-CursorInteraction ${SDL2_LIBRARIES} -lgdi32)
add_custom_command(TARGET SDL2-CursorInteraction POST_BUILD 
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    "../../lib/SDL2-2.0.8/bin/x64/SDL2.dll"            
     $<TARGET_FILE_DIR:${CMAKE_PROJECT_NAME}>)

add_custom_command(TARGET SDL2-CursorInteraction POST_BUILD 
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    "../resources"            
    $<TARGET_FILE_DIR:${CMAKE_PROJECT_NAME}>)