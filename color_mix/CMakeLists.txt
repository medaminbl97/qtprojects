cmake_minimum_required(VERSION 3.20)
project(color_mix)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/opt/homebrew/Cellar/qt/6.4.2")

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(color_mix main.cpp ColorPalette.cpp ColorPalette.h)
target_link_libraries(color_mix
        Qt6::Core
        Qt6::Gui
        Qt6::Widgets
        )

