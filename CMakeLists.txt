# 项目名
set(ProjectName CMakeTemplateProj)

cmake_minimum_required(VERSION 3.16)
project(${ProjectName} LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 设置编译输出目录和编译exe目标名
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_SOURCE_DIR}/out/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_SOURCE_DIR}/out/bin)

set(SpdlogPath          "${CMAKE_CURRENT_LIST_DIR}/3rdParties/spdlog") 

# 核心代码
file(GLOB_RECURSE CORE_SOURCES ${CMAKE_SOURCE_DIR}/${PROJECT_NAME}/src/*.cpp)
file(GLOB_RECURSE CORE_HEADERS ${CMAKE_SOURCE_DIR}/${PROJECT_NAME}/src/*.h)

# 包含子项目
add_subdirectory ("${PROJECT_NAME}/test")
