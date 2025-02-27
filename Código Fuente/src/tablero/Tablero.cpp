//
// Created by michael on 22/02/25.
//

#include "Tablero.h"
#include <iostream>
#include "../juego/Jugador.h"
#include "../juego/Ficha.h"
#include "../pilascolas/NodoDoble.hpp"

using namespace std;

Tablero::Tablero() {
    crearTablero();
    bloquearCasillasAleatorias();
}

void Tablero::crearTablero() {
    for (int i = 0; i < FILAS_COLUMNAS; i++) {
        for (int j = 0; j < FILAS_COLUMNAS; j++) {
            tablero[i][j] = new NodoDoble<char>(' ');
        }
    }

    for (int i = 0; i < FILAS_COLUMNAS; i++) {
        for (int j = 0; j < FILAS_COLUMNAS; j++) {
            if (j < FILAS_COLUMNAS - 1) {
                //el orden es de derecha, izquierda, abajo y arriba
                if (j < FILAS_COLUMNAS - 1) {
                    tablero[i][j]->siguiente = tablero[i][j + 1];
                }
                if (j > 0) {
                    tablero[i][j]->anterior = tablero[i][j - 1];
                }
                if (i < FILAS_COLUMNAS - 1) {
                    tablero[i][j]->abajo = tablero[i + 1][j];
                }
                if (i > 0) {
                    tablero[i][j]->arriba = tablero[i - 1][j];
                }
            }
        }
    }
}

void Tablero::bloquearCasillasAleatorias() {
    srand(time(0));
    int bloqueadas = 0;

    while (bloqueadas < 10) {
        int fila = rand() % FILAS_COLUMNAS;
        int columna = rand() % FILAS_COLUMNAS;

        NodoDoble<char> *nodo = obtenerNodo(fila, columna);
        if (nodo && nodo->getData() == ' ') {
            nodo->setData('#');
            bloqueadas++;
        }
    }
}

NodoDoble<char> *Tablero::obtenerNodo(int fila, int columna) {
    if (fila >= 0 && fila < FILAS_COLUMNAS && columna >= 0 && columna < FILAS_COLUMNAS) {
        return tablero[fila][columna];
    }
    return nullptr;
}

void Tablero::mostrarTablero(vector<Jugador> jugadores) {
    cout << "\n--------------TABLERO DE JUEGO---------------\n";
    for (int i = 0; i < FILAS_COLUMNAS; i++) {
        for (int j = 0; j < FILAS_COLUMNAS; j++) {
            if (tablero[i][j]->getData() == '#') {
                cout << "[\033[31m#\033[0m]";
            } else {
                cout << "[ ]";
            }
        }
        cout << endl;
    }
    mostrarJugadores(jugadores);
}


void Tablero::mostrarJugadores(vector<Jugador> jugadores) {
    cout << "\n____________________________________________";
    cout << "\n\t--- Jugadores en partida ---\n";
    for (Jugador &jugador: jugadores) {
        cout << "Jugador: " << jugador.getNombre() << "\n";
        cout << "\tFichas: ";
        jugador.mostrarFichas();
    }
}
