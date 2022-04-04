cmake_minimum_required(VERSION 3.0.0)

project(Playground VERSION 0.1.0 LANGUAGES CXX)

include(cmake/App.cmake)

FILE(GLOB_RECURSE SOURCES src/*)

# set(SOURCES "src/UI/ui.h"
#             "src/UI/ui.cpp"
#             "src/DataExample/dataExample.h"
#             "src/main.cpp")

add_app("${SOURCES}")