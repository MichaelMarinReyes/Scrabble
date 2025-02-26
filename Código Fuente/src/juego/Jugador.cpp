//
// Created by michael on 22/02/25.
//

#include "Jugador.h"
#include <iostream>
#include <algorithm>

using namespace std;

Jugador::Jugador(string &nombre) : nombre(nombre), puntuacion(0), cantidadMovimientos(0),
                                   tiempoTotalTurnos(chrono::seconds(0)) {
}

string Jugador::getNombre() {
    return nombre;
}

int Jugador::getPuntuacion() {
    return puntuacion;
}

int Jugador::getCantidadMovimientos() {
    return cantidadMovimientos;
}

int Jugador::getTiempoPromedioturnno() {
    if (cantidadMovimientos == 0) {
        return 0;
    } else {
        return tiempoTotalTurnos.count() / cantidadMovimientos;
    }
}

vector<string> &Jugador::getPalabrasJugadas() {
    return palabrasJugadas;
}

void Jugador::mostrarFichas() {
    for (int i = 0; i < fichas.size(); i++) {
        cout << fichas[i] << " | ";
    }
    cout << endl;
}


void Jugador::agregarFicha(char ficha) {
    fichas.push_back(ficha);
}

void Jugador::colocarFicha(string &palabra, int puntos) {
    palabrasJugadas.push_back(palabra);
    puntuacion += puntos;
    movimientos.push_back("Colocó palabra: " + palabra);
    cantidadMovimientos++;
}

void Jugador::deshacerMovimiento() {
    if (cantidadMovimientos == 0) {
        cout << "No hay movimientos para deshacer\n";
        return;
    }

    string ultimoMovimiento = movimientos.back();
    movimientos.pop_back();

    string ultimaPalabra = palabrasJugadas.back();
    palabrasJugadas.pop_back();

    puntuacion -= ultimaPalabra.length();
    cantidadMovimientos++;
}

void Jugador::iniciarTurno() {
    tiempoInicioTurno = chrono::high_resolution_clock::now();
}

void Jugador::finalizarTurno() {
    auto tiempoFinalTurno = chrono::high_resolution_clock::now();
    tiempoTotalTurnos += chrono::duration_cast<chrono::duration<double> >(tiempoFinalTurno - tiempoInicioTurno);
}

void Jugador::mostrarPalabrasJugadas() {
    if (palabrasJugadas.empty()) {
        cout << "No se ha jugado ninuna palabra\n";
    } else {
        cout << "Palabras jugadas:\n";
        for (const auto &palabra: palabrasJugadas) {
            cout << palabra << "\n";
        }
    }
}
