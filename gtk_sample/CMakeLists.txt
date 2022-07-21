# Versão do cmake
cmake_minimum_required(VERSION 3.10)

# Nome do projeto
project(Learning)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK REQUIRED gtk+-3.0)

# Adiciona o executável
add_executable(Learning main.c)

target_link_libraries(Learning PRIVATE ${GTK_LIBRARIES})
target_include_directories(Learning PRIVATE ${GTK_INCLUDE_DIRS})
target_link_directories(Learning PRIVATE ${GTK_INCLUDE_DIRS})
