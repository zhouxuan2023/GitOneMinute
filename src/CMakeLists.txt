message(STATUS "一分钟Git实战入门")
message(STATUS "出品：周旋机器视觉")
message(STATUS "www.roundvision.cc")
#S.1 工程基础配置
cmake_minimum_required(VERSION 3.21 FATAL_ERROR)
project(GitOneMinute LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#S.2 设置工程名称
project(GitOneMinute LANGUAGES CXX)

#S.3 添加文件树
file(
	GLOB _SRCS
	main.cpp
)
add_executable(${PROJECT_NAME} ${_SRCS})

#S.4 设置默认启动项目
if(CMAKE_GENERATOR MATCHES "Visual Studio")
    set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})
endif()