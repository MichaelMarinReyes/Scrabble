//
// Created by michael on 25/02/25.
//

#include "NodoSimple.hpp"
#include "../juego/Jugador.h"

using namespace std;

template<class T>
class Pila {
private:
    NodoSimple<Jugador> *nodo = nullptr;

public:
    Pila();
    ~Pila();
    bool estaVacia() const;
    void insertar(const T &valor);
    T eliminar();
    T mostrar() const;
};

#include "Pila.tpp"