cmake_minimum_required(VERSION 3.6)
project(Castle_War)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Interface.cpp Interface.h Jogo.cpp Jogo.h Celula.cpp Celula.h Ser.cpp Ser.h Colonia.cpp Colonia.h ElementoJogo.cpp ElementoJogo.h Atributos.cpp Atributos.h Consola.cpp Consola.h Inimigos.cpp Inimigos.h)
add_executable(Castle_War ${SOURCE_FILES})