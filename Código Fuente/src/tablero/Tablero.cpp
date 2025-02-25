//
// Created by michael on 22/02/25.
//

#include "Tablero.h"
#include <iostream>
#include "../juego/Jugador.h"

using namespace std;

Tablero::Tablero() {
    this -> inicio = nullptr;
    crearTablero();
    bloquearCasillasAleatorias();
}

void Tablero::crearTablero() {
    Nodo* filaAnterior = nullptr;
    for (int i = 0; i < filasColumnas; i++) {
        Nodo* filaActual = nullptr;
        Nodo* anterior = nullptr;

        for (int j = 0; j < filasColumnas; j++) {
            Nodo* nuevoNodo = new Nodo();

            if (!filaActual) filaActual = nuevoNodo;
            if (anterior) anterior -> siguiente = nuevoNodo;
            anterior = nuevoNodo;

            if (filaAnterior) {
                Nodo* arriba = filaAnterior;
                for (int k = 0; k < j; k++) {
                    arriba = arriba -> siguiente;
                }
                arriba -> abajo = nuevoNodo;
            }
        }

        if (!inicio) inicio = filaActual;
        filaAnterior = filaActual;
    }
}

void Tablero::bloquearCasillasAleatorias() {
    srand(time(0));
    int bloqueadas = 0;

    while (bloqueadas < 10) {
        int fila = rand() % filasColumnas;
        int columna = rand() % filasColumnas;

        Nodo* nodo = obtenerNodo(fila, columna);
        if (nodo && !nodo -> bloqueada) {
            nodo -> bloqueada = true;
            bloqueadas++;
        }
    }
}

Nodo* Tablero::obtenerNodo(int fila, int columna) {
    Nodo* actual = inicio;
    for (int i = 0; i < fila; i++) {
        if (actual) actual = actual -> abajo;
    }
    for (int j = 0; j < columna; j++) {
        if (actual) actual = actual -> siguiente;
    }
    return actual;
}

void Tablero::mostrarTablero(vector<Jugador> jugadores) {
    Nodo* fila = inicio;
    while (fila) {
        Nodo* actual = fila;
        while (actual) {
            if (actual -> bloqueada) {
                cout << "[\033[31m#\033[0m]";
            } else {
                cout << "[ ]";
            }
            actual = actual -> siguiente;
        }
        cout << endl;
        fila = fila ->abajo;
    }

    mostrarJugadores(jugadores);
}

void Tablero::mostrarJugadores(vector<Jugador> jugadores) {
    cout <<"\n____________________________________________";
    cout << "\n\t--- Jugadores en partida ---\n";
    for (Jugador& jugador : jugadores) {
        cout << "Jugador: " << jugador.getNombre() << "\n";
        cout << "\tFichas: ";
        jugador.mostrarFichas();
    }
}
