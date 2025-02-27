//
// Created by michael on 23/02/25.
//
#pragma once
#include <iostream>
using namespace std;

template<class T>
class NodoSimple {
private:
    T dato;
public:
    NodoSimple(const T valor);
    NodoSimple<T>* siguiente;
    T getDato();
    void setDato(const T dato);
    void setSiguiente(NodoSimple<T> *siguiente);
};

#include "NodoSimple.tpp"