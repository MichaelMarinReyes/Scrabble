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
        src/puntuacion/Puntaje.cpp
        src/puntuacion/Puntaje.h
        src/juego/Ficha.cpp
        src/juego/Ficha.h
        src/tablero/Casilla.cpp
        src/tablero/Casilla.h
        src/pilascolas/ColaTurno.tpp
        src/pilascolas/ColaTurno.hpp
        src/pilascolas/Pila.tpp
        src/pilascolas/Pila.hpp
        src/pilascolas/Lista.hpp
        src/pilascolas/Lista.tpp
        src/pilascolas/NodoSimple.hpp
        src/pilascolas/NodoSimple.tpp
        src/pilascolas/ListaDoble.hpp
        src/pilascolas/ListaDoble.tpp
        src/pilascolas/NodoDoble.hpp
        src/pilascolas/NodoDoble.tpp
)
