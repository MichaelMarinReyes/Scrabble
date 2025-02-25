//
// Created by michael on 22/02/25.
//

#ifndef MATRIZ_NODOS_H
#define MATRIZ_NODOS_H
#include "../pilascolas/NodoLetras.h"
#include <vector>
#include "../juego/Jugador.h"
#include "../juego/Ficha.h"
#include "../pilascolas/ListaCaracteres.h"

class Tablero {
private:
    ListaCaracteres listaTablero;
    int filasColumnas = 15;
    vector<Jugador> jugadores;

public:
    Tablero();
    void crearTablero();
    void bloquearCasillasAleatorias();
    NodoLetras* obtenerNodo(int fila, int columna);
    void colocarLetra(int fila, int columna, char letra);
    void mostrarTablero(vector<Jugador> jugadores);
    void mostrarJugadores(vector<Jugador> jugadores);
    void colocarFicha(Ficha ficha, int x, int y);
};

#endif
