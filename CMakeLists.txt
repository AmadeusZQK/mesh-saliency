cmake_minimum_required(VERSION 3.25)
project(mesh-saliency)

set(CMAKE_CXX_STANDARD 17)

# 添加所有.cpp文件为源文件
file(GLOB SOURCE_FILES "*.cpp")

set(EIGEN3_INCLUDE_DIR "./eigen-3.4.0")

# 添加Eigen的头文件路径
include_directories(${EIGEN3_INCLUDE_DIR})

add_executable(mesh-saliency ${SOURCE_FILES})
