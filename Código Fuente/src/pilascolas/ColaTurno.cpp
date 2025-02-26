//
// Created by michael on 25/02/25.
//

#include "ColaTurno.h"
#include <iostream>
#include "../juego/Jugador.h"
#include "NodoSimple.h"

void ColaTurno::insertarCola(NodoSimple<Jugador> *&frente, NodoSimple<Jugador> *&fin, Jugador jugador) {
    NodoSimple<Jugador> *nuevoNodo = new NodoSimple<Jugador>(jugador);
    nuevoNodo->dato = jugador;
    nuevoNodo->siguiente = NULL;

    if (colaVacia(frente)) {
        frente = nuevoNodo;
    } else {
        fin->siguiente = nuevoNodo;
    }
    fin = nuevoNodo;
}

bool ColaTurno::colaVacia(NodoSimple<Jugador> *&frente) {
    return (frente == NULL) ? true : false;
}

void ColaTurno::eliminarCola(NodoSimple<Jugador> *&frente, NodoSimple<Jugador> *&fin, Jugador &jugador) {
    jugador = frente->dato;
    NodoSimple<Jugador> *auxiliar = frente;

    if (frente == fin) {
        frente = NULL;
        fin = NULL;
    } else {
        frente = frente->siguiente;
    }
    delete auxiliar;
}
