cmake_minimum_required(VERSION 3.23)
project(fichaacademia C)

set(CMAKE_C_STANDARD 99)

add_executable(fichaacademia main.c funcoes/funcoes.c funcoes/funcoes.h funcoes/Menu.c)

