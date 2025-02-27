//
// Created by michael on 25/02/25.
//

#pragma once
#include "NodoSimple.hpp"
#include "../juego/Jugador.h"

template<class T>
class ColaTurno {
private:
    NodoSimple<Jugador> *frente = nullptr;
    NodoSimple<Jugador> *fin = nullptr;
public:
    ColaTurno();
    ~ColaTurno();
    bool estaVacia() const;
    void agregar(const T& dato);
    T eliminar();
    T mostrar() const;
};

#include "ColaTurno.tpp"