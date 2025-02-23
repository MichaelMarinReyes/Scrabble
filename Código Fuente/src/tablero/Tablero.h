//
// Created by michael on 22/02/25.
//

#ifndef TABLERO_H
#define TABLERO_H
#include "NodoFila.h"


class Tablero {
private:
    NodoFila* primeraFila;
    int filaColumna = 15;

public:
    Tablero() : primeraFila(nullptr) {}
    ~Tablero();
    void crearTablero();
    void mostrarTablero();
    void liberarMemoria();
};



#endif //TABLERO_H
