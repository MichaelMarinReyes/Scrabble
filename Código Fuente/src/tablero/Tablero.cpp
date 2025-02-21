#include "Tablero.h"
#include "Casilla.h"
#include <iostream>
using namespace std;

Tablero::Tablero(int filas, int columnas) {
    filas = filas;
    columnas = columnas;
}

void mostrarTablero() {
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            cout << " * ";
        }
        cout<<"\n";
    }
    
}

void editarCasilla(int fila, int columna) {
    for(int i = 0; i < 15; i++) {
        for(int j = 0; j < 15; j++) {
            if (i == fila && j == columna) {
                cout <<"nuevo texto";
            }
        }
    }

    mostrarTablero();
}

