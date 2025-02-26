//
// Created by michael on 25/02/25.
//

#ifndef NODO_H
#define NODO_H

template <typename  T>

class NodoDoble {
public:
    T dato;
    NodoDoble<T>* siguiente;
    NodoDoble<T>* anterior;
    NodoDoble<T>* abajo;
    NodoDoble<T>* arriba;

    NodoDoble(T valor): dato(valor), siguiente(nullptr), anterior(nullptr), abajo(nullptr), arriba(nullptr) {}
};

#endif
