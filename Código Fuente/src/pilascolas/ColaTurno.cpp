//
// Created by michael on 25/02/25.
//

#include "ColaTurno.h"
#include <iostream>
#include "../juego/Jugador.h"
#include "NodoJugador.h"

void ColaTurno::insertarCola(NodoJugador *&frente, NodoJugador *&fin, Jugador jugador) {
    NodoJugador *nuevoNodo = new NodoJugador(jugador);
    nuevoNodo->dato = jugador;
    nuevoNodo->siguiente = NULL;

    if (colaVacia(frente)) {
        frente = nuevoNodo;
    } else {
        fin->siguiente = nuevoNodo;
    }
    fin = nuevoNodo;
}

bool ColaTurno::colaVacia(NodoJugador *&frente) {
    return (frente == NULL) ? true : false;
}

void ColaTurno::eliminarCola(NodoJugador *&frente, NodoJugador *&fin, Jugador &jugador) {
    jugador = frente->dato;
    NodoJugador *auxiliar = frente;

    if (frente == fin) {
        frente = NULL;
        fin = NULL;
    } else {
        frente = frente->siguiente;
    }
    delete auxiliar;
}
