//
// Created by michael on 25/02/25.
//

#pragma once
#include "NodoSimple.hpp"

template<typename T>

class Lista {
public:
    NodoSimple<T>* cabeza;
    NodoSimple<T>* cola;
    Lista();
    ~Lista();
    void insertarInicio(T valor);
    void insertarFinal(T valor);
    bool eliminar(T valor);
    void mostrar() const;
};

#include "Lista.tpp"
