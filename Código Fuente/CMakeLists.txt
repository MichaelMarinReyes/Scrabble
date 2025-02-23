cmake_minimum_required(VERSION 3.30)
project(CodigoFuente)

set(CMAKE_CXX_STANDARD 20)

add_executable(CodigoFuente src/main.cpp
        src/juego/Juego.cpp
        src/juego/Juego.h
        src/juego/Jugador.cpp
        src/juego/Jugador.h
        src/utils/CargaDatos.cpp
        src/utils/CargaDatos.h
        src/tablero/Tablero.cpp
        src/tablero/Tablero.h
        src/tablero/NodoFila.cpp
        src/tablero/NodoFila.h
        src/tablero/NodoCelda.cpp
        src/tablero/NodoCelda.h
)
