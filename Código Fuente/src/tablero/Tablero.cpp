//
// Created by michael on 22/02/25.
//

#include "Tablero.h"
#include <iostream>
#include "../juego/Jugador.h"
#include "../juego/Ficha.h"

using namespace std;

Tablero::Tablero() {
    crearTablero();
}

void Tablero::crearTablero() {
    for (int i = 0; i < filasColumnas; i++) {
        for (int j = 0; j < filasColumnas; j++) {
            listaTablero.insertarLista(' ');
        }
    }
    bloquearCasillasAleatorias();
}

void Tablero::bloquearCasillasAleatorias() {
    srand(time(0));
    int bloqueadas = 0;

    while (bloqueadas < 10) {
        int fila = rand() % filasColumnas;
        int columna = rand() % filasColumnas;;

        NodoLetras *nodo = obtenerNodo(fila, columna);
        if (nodo && nodo->dato == ' ') {
            nodo -> dato = '#';
            bloqueadas++;
        }
    }
}

NodoLetras *Tablero::obtenerNodo(int fila, int columna) {
    int posicion = fila * filasColumnas + columna;
    NodoLetras *actual = listaTablero.getInicio();

    for (int i = 0; i < posicion; i++) {
        if (actual) actual = actual->siguiente;
    }
    return actual;
}

void Tablero::mostrarTablero(vector<Jugador> jugadores) {
    NodoLetras *actual = listaTablero.getInicio();
    int contador = 0;

    cout << "\n--------------TABLERO DE JUEGO---------------\n";
    while (actual) {
        if (actual->dato == '#') {
            cout << "[\033[31m#\033[0m]";
        } else {
            cout << "[ ]";
        }

        contador++;
        if (contador % filasColumnas == 0) cout << endl;

        actual = actual->siguiente;
    }

    mostrarJugadores(jugadores);
}

void Tablero::mostrarJugadores(vector<Jugador> jugadores) {
    cout << "\n____________________________________________";
    cout << "\n\t--- Jugadores en partida ---\n";
    for (Jugador &jugador: jugadores) {
        cout << "Jugador: " << jugador.getNombre() << "\n";
        cout << "\tFichas: ";
        jugador.mostrarFichas();
    }
}
