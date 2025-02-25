//
// Created by michael on 25/02/25.
//

#ifndef NODOJUGADOR_H
#define NODOJUGADOR_H
#include "../juego/Jugador.h"

using namespace std;

struct NodoJugador {
    Jugador dato;
    NodoJugador *siguiente;

    NodoJugador(Jugador jugador) : dato(jugador), siguiente(NULL) {}
};

#endif
