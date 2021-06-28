cmake_minimum_required(VERSION 3.16)

project(pong LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(Qt6_DIR "C:\\Qt\\6.1.1\\mingw81_64\\lib\\cmake\\Qt6")

find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)

add_executable(pong
        main.cpp
        )

target_link_libraries(pong Qt6::Core Qt6::Widgets )