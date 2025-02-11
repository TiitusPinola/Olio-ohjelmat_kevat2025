cmake_minimum_required(VERSION 3.16)

project(olio_vk6_tehtava LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(olio_vk6_tehtava main.cpp
    student.h student.cpp)

include(GNUInstallDirs)
install(TARGETS olio_vk6_tehtava
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
