cmake_minimum_required(VERSION 3.1)

project(door)

find_path(PLOG_INCLUDE_DIRS "plog/Log.h")

set(DOOR_SRC src/main.cpp)

add_executable(door ${DOOR_SRC})
target_include_directories(door PRIVATE ${PLOG_INCLUDE_DIRS})
target_link_libraries(door)
