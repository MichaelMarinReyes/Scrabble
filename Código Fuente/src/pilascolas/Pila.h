//
// Created by michael on 25/02/25.
//

#ifndef PILA_H
#define PILA_H
#include "NodoSimple.h"
#include "../juego/Jugador.h"

using namespace std;


class Pila {
private:
    NodoSimple<Jugador> *nodo = NULL;

public:
    void agregarPila(NodoSimple<Jugador> *&pila, Jugador jugador);
    void quitarPila(NodoSimple<Jugador> *&pila, Jugador &jugador);
};



#endif
