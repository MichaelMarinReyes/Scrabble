//
// Created by michael on 25/02/25.
//

#ifndef COLATURNO_H
#define COLATURNO_H
#include "NodoJugador.h"
#include "../juego/Jugador.h"


class ColaTurno {
private:
    NodoJugador *frente = NULL;
    NodoJugador *fin = NULL;
public:
    void insertarCola(NodoJugador *&frente, NodoJugador *&fin, Jugador jugador);
    bool colaVacia(NodoJugador *&frente);
    void eliminarCola(NodoJugador *&frente, NodoJugador *&fin, Jugador &jugador);
};


#endif
