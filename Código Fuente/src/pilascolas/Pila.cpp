//
// Created by michael on 25/02/25.
//

#include "Pila.h"
#include "NodoLetras.h"
#include <stdlib.h>

void Pila::agregarPila(NodoLetras *&pila, char letra) {
    NodoLetras *nuevoNodo = new NodoLetras();
    nuevoNodo->dato = letra;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;
}

void Pila::quitarPila(NodoLetras *&pila, char &letra) {
    NodoLetras *auxilar = pila;
    if (pila != NULL) {
        letra = auxilar->dato;
        pila = auxilar->siguiente;
        delete auxilar;
    } else {
        cout << "Pila vacia" << endl;
    }
}
