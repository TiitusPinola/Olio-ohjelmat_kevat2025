cmake_minimum_required(VERSION 3.16)

project(olio_vk3_teht1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(olio_vk3_teht1 main.cpp
    chef.h chef.cpp
    italianchef.h italianchef.cpp
)

include(GNUInstallDirs)
install(TARGETS olio_vk3_teht1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
