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
        src/pilascolas/NodoLetras.cpp
        src/pilascolas/NodoLetras.h
        src/puntuacion/Puntaje.cpp
        src/puntuacion/Puntaje.h
        src/juego/Ficha.cpp
        src/juego/Ficha.h
        src/tablero/Casilla.cpp
        src/tablero/Casilla.h
        src/pilascolas/ColaTurno.cpp
        src/pilascolas/ColaTurno.h
        src/pilascolas/Pila.cpp
        src/pilascolas/Pila.h
        src/pilascolas/NodoJugador.cpp
        src/pilascolas/NodoJugador.h
        src/pilascolas/ListaCaracteres.cpp
        src/pilascolas/ListaCaracteres.h
)
