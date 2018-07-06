cmake_minimum_required(VERSION 3.11)

project(SDL2-CMake)

set(SOURCE_FILES src/main.cpp)
set(SDL2_DIR ../lib/SDL2-2.0.8)

find_package(SDL2)

add_subdirectory(src)

include_directories(${SDL2_INCLUDE_DIRS})
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -mwindows")
add_executable(SDL2-CMake WIN32 ${SOURCE_FILES})
target_link_libraries(SDL2-CMake ${SDL2_LIBRARIES})

add_custom_command(TARGET SDL2-CMake POST_BUILD 
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    "../../lib/SDL2-2.0.8/bin/x64/SDL2.dll"              
     $<TARGET_FILE_DIR:${CMAKE_PROJECT_NAME}>)



