cmake_minimum_required(VERSION 3.25)
project(untitled3)

set(CMAKE_CXX_STANDARD 17)

set(EIGEN3_INCLUDE_DIR "C:/Users/root/Desktop/Repositories/mesh-saliency/eigen-3.4.0")

# 添加所有.cpp文件为源文件
file(GLOB SOURCE_FILES "*.cpp")

# 添加Eigen的头文件路径
include_directories(${EIGEN3_INCLUDE_DIR})

add_executable(untitled3 ${SOURCE_FILES})
