cmake_minimum_required(VERSION 3.16)

project(olio_vk2_teht1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(olio_vk2_teht1 main.cpp
    game.h game.cpp)

include(GNUInstallDirs)
install(TARGETS olio_vk2_teht1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
