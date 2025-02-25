//
// Created by michael on 25/02/25.
//

#ifndef PILA_H
#define PILA_H
#include "NodoLetras.h"

using namespace std;


class Pila {
private:
    NodoLetras *nodo = NULL;

public:
    void agregarPila(NodoLetras *&pila, char letra);
    void quitarPila(NodoLetras *&pila, char &letra);
};



#endif
