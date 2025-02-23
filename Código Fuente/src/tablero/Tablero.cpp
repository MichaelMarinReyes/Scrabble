//
// Created by michael on 22/02/25.
//

#include "Tablero.h"
#include <iostream>

using namespace std;

void Tablero::crearTablero() {
    NodoFila* filaActual = nullptr;
    NodoFila* filaAnterior = nullptr;

    for (int i = 0; i < filaColumna; i++) {
        NodoFila* nuevaFila = new NodoFila();
        if (i == 0) {
            primeraFila = nuevaFila;
        } else {
            filaAnterior->abajo = nuevaFila;
        }
        filaAnterior = nuevaFila;

        NodoCelda* celdaAnterior = nullptr;

        for (int j = 0; j < filaColumna; j++) {
            NodoCelda *nuevaCelda = new NodoCelda(i * filaColumna + j);

            if (j == 0) {
                nuevaFila->primeraCelda = nuevaCelda;
            } else {
                celdaAnterior->derecha = nuevaCelda;
            }

            celdaAnterior = nuevaCelda;
        }
    }
}

void Tablero::mostrarTablero() {
    NodoFila *filaActual = primeraFila;

    while (filaActual) {
        NodoCelda *celdaActual = filaActual->primeraCelda;
        while (celdaActual) {
            cout << celdaActual->valor << "\t";
            celdaActual = celdaActual->derecha;
        }
        cout << endl;
        filaActual = filaActual->abajo;
    }
}

void Tablero::liberarMemoria() {
    NodoFila *filaActual = primeraFila;
    while (filaActual) {
        NodoCelda *celdaActual = filaActual->primeraCelda;
        while (celdaActual) {
            NodoCelda *celdaTemp = celdaActual;
            celdaActual = celdaActual->derecha;
            delete celdaTemp;
        }
        NodoFila *filaTemp = filaActual;
        filaActual = filaActual->abajo;
        delete filaTemp;
    }
}

// Destructor fuera de liberarMemoria()
Tablero::~Tablero() {
    liberarMemoria();
}
