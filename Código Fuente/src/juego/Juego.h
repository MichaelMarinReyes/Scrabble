//
// Created by michael on 22/02/25.
//

#ifndef JUEGO_H
#define JUEGO_H
#include <iostream>
#include "Jugador.h"

using namespace std;

class Juego {
private:
    vector<Jugador> jugadores;


public:
    void menuPrincipal();
    void comenzarJuego();
    void mostrarReportes();

};


#endif //JUEGO_H
