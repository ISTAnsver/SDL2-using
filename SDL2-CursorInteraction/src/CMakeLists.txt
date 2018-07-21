cmake_minimum_required(VERSION 3.11)

target_sources(SDL2-CursorInteraction PUBLIC ${CMAKE_CURRENT_LIST_DIR}/main.cpp)
#set(SOURCES ${SOURCES} ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp PARENT_SCOPE)

include(src/Application/CMakeLists.txt)
#add_subdirectory(Application)