//
// Created by michael on 25/02/25.
//

#include "Pila.h"
#include "NodoSimple.h"
#include <stdlib.h>

void Pila::agregarPila(NodoSimple<Jugador> *&pila, Jugador jugador) {
    NodoSimple<Jugador> *nuevoNodo = new NodoSimple<Jugador>(jugador);
    nuevoNodo->dato = jugador;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;
}

void Pila::quitarPila(NodoSimple<Jugador> *&pila, Jugador &jugador) {
    NodoSimple<Jugador> *auxilar = pila;
    if (pila != NULL) {
        jugador = auxilar->dato;
        pila = auxilar->siguiente;
        delete auxilar;
    } else {
        cout << "Pila vacia" << endl;
    }
}
