//
// Created by michael on 22/02/25.
//

#ifndef MATRIZ_NODOS_H
#define MATRIZ_NODOS_H
#include "../juego/Jugador.h"
#include "../juego/Ficha.h"
#include "../pilascolas/NodoDoble.hpp"
#include <vector>

#include "../pilascolas/ColaTurno.hpp"

class Tablero {
private:
    static const int FILAS_COLUMNAS = 15;
    NodoDoble<char>* tablero[FILAS_COLUMNAS][FILAS_COLUMNAS];
    ColaTurno<Jugador> jugadores;

public:
    Tablero();
    void crearTablero();
    void bloquearCasillasAleatorias();
    NodoDoble<char> *obtenerNodo(int fila, int columna);
    void colocarLetra(int fila, int columna, char letra);
    void mostrarTablero(ColaTurno<Jugador> jugadores);
    void mostrarJugadores(ColaTurno<Jugador> jugadores);
    void colocarFicha(Ficha ficha, int x, int y);
};

#endif
