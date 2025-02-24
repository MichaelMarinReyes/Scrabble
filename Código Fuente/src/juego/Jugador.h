//
// Created by michael on 22/02/25.
//

#ifndef JUGADOR_H
#define JUGADOR_H
#include "Jugador.h"
#include <vector>
#include <string>
#include <chrono>

using namespace std;

class Jugador {
private:
    string nombre;
    vector<char> fichas;
    vector<string> palabrasJugadas;
    vector<string> movimientos;
    int puntuacion;
    int cantidadMovimientos;
    chrono::duration<double> tiempoTotalTurnos;
    chrono::time_point<chrono::system_clock> tiempoInicioTurno;

public:
    Jugador(string& nombre);
    string getNombre();
    int getPuntuacion();
    int getCantidadMovimientos();
    int getTiempoPromedioturnno();
    vector<string>& getPalabrasJugadas();
    void agregarFicha(char ficha);
    void colocarFicha(string& palabra, int puntos);
    void deshacerMovimiento();
    void iniciarTurno();
    void finalizarTurno();
    void mostrarPalabrasJugadas();
    void mostrarFichas();

};

#endif