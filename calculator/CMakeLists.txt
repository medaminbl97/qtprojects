cmake_minimum_required(VERSION 3.20)
project(calculator)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


set (CMAKE_PREFIX_PATH "/opt/homebrew/Cellar/qt@5/5.15.2_1")


find_package(Qt5 COMPONENTS
        Core
        Widgets
        REQUIRED)

add_executable(untitled3 main.cpp exw.cpp exw.h)
target_link_libraries(untitled3
        Qt5::Core
        Qt5::Widgets
        )

