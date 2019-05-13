cmake_minimum_required(VERSION 2.8.3)
project(build_world)

find_package(gazebo REQUIRED)

find_package(gazebo REQUIRED)

link_directories(${GAZEBO_LIBRARY_DIRS})
include_directories(${GAZEBO_INCLUDE_DIRS})

# include_directories(${GAZEBO_INCLUDE_DIRS})

list(APPEND CMAKE_CXX_FLAGS "${GAZEBO_CXX_FLAGS}")

add_library(${PROJECT_NAME} SHARED script/hello.cpp)
target_link_libraries(${PROJECT_NAME}  ${GAZEBO_LIBRARIES})
