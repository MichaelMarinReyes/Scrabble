//
// Created by michael on 22/02/25.
//

#ifndef MATRIZ_NODOS_H
#define MATRIZ_NODOS_H
#include "../pilascolas/NodoDoble.h"
#include "../juego/Jugador.h"
#include "../juego/Ficha.h"
#include "../pilascolas/Lista.h"
#include <vector>

class Tablero {
private:
    Lista<Lista<NodoDoble<char> > > listaTablero;
    int filasColumnas = 15;
    vector<Jugador> jugadores;

public:
    Tablero();
    void crearTablero();
    void enlazarFilas();
    void bloquearCasillasAleatorias();
    NodoDoble<char> *obtenerNodo(int fila, int columna);
    void colocarLetra(int fila, int columna, char letra);
    void mostrarTablero(vector<Jugador> jugadores);
    void mostrarJugadores(vector<Jugador> jugadores);
    void colocarFicha(Ficha ficha, int x, int y);
};

#endif
