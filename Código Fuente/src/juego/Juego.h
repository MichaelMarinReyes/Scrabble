//
// Created by michael on 22/02/25.
//

#ifndef JUEGO_H
#define JUEGO_H
#include <iostream>
#include <vector>
#include <stack>
#include "Jugador.h"
#include "../pilascolas/ColaTurno.hpp"
#include "../tablero/Tablero.h"
#include "../utils/CargaDatos.h"
#include "../puntuacion/Puntaje.h"

using namespace std;

class Juego {
private:
    stack<string> historialPalabras;
    vector<string> palabrasNoEncontradas;
    ColaTurno<Jugador> jugadores;

    void comenzarJuego();
    void jugarTurnos(Tablero& tablero);
    void mostrarResultados();
    void mostrarReportes();
    bool verificarFinDeJuego();

public:
    void menuPrincipal();
};

#endif
