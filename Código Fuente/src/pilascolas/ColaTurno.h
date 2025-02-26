//
// Created by michael on 25/02/25.
//

#ifndef COLATURNO_H
#define COLATURNO_H
#include "NodoSimple.h"
#include "../juego/Jugador.h"


class ColaTurno {
private:
    NodoSimple<Jugador> *frente = NULL;
    NodoSimple<Jugador> *fin = NULL;
public:
    void insertarCola(NodoSimple<Jugador> *&frente, NodoSimple<Jugador> *&fin, Jugador jugador);
    bool colaVacia(NodoSimple<Jugador> *&frente);
    void eliminarCola(NodoSimple<Jugador> *&frente, NodoSimple<Jugador> *&fin, Jugador &jugador);
};


#endif
