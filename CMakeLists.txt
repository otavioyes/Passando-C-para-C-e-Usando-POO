cmake_minimum_required(VERSION 3.16)

project(Date LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Date main.cpp
    date.h)

include(GNUInstallDirs)
install(TARGETS Date
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
