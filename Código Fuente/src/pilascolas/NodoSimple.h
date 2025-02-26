//
// Created by michael on 23/02/25.
//

#ifndef NODO_H
#define NODO_H
#include <iostream>

using namespace std;

template<class T>

struct NodoSimple {
    T dato;
    NodoSimple* siguiente;
};

#endif
