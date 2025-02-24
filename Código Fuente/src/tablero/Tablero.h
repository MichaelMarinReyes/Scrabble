//
// Created by michael on 22/02/25.
//

#ifndef MATRIZ_NODOS_H
#define MATRIZ_NODOS_H
#include "Nodo.h"
#include <vector>
#include "../juego/Jugador.h"

class Tablero {
private:
    Nodo* inicio;
    int filasColumnas = 15;
    vector<Jugador> jugadores;

public:
    Tablero();
    void crearTablero();
    void bloquearCasillasAleatorias();
    Nodo* obtenerNodo(int fila, int columna);
    void colocarLetra(int fila, int columna, char letra);
    void mostrarTablero(vector<Jugador> jugadores);
    void mostrarJugadores();
};

#endif
