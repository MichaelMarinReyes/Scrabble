//
// Created by michael on 22/02/25.
//

#include "Tablero.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../juego/Jugador.h"
#include "../juego/Ficha.h"
#include "../pilascolas/NodoDoble.h"

using namespace std;

Tablero::Tablero() {
    crearTablero();
}

void Tablero::crearTablero() {
    for (int i = 0; i < filasColumnas; i++) {
        Lista<NodoDoble<char>> fila;
        NodoDoble<char> *nodoAnterior = nullptr;
        for (int j = 0; j < filasColumnas; j++) {
            NodoDoble<char> *nuevoNodo = new NodoDoble<char>(' ');
            fila.insertarFinal(nuevoNodo->dato);

            if (nodoAnterior) {
                nodoAnterior->siguiente = nuevoNodo;
                nuevoNodo->anterior = nodoAnterior;
            }
            nodoAnterior = nuevoNodo;
        }
        cout << "truena en el método crearTablero\n";
        listaTablero.insertarFinal(fila);
    }
cout << "creando tablero\n";
    //enlazarFilas();

    //bloquearCasillasAleatorias();
}

void Tablero::enlazarFilas() {
    NodoDoble<Lista<NodoDoble<char>>> *filaActual = listaTablero.getInicio();
    NodoDoble<Lista<NodoDoble<char>>> *filaAbajo = filaActual ? filaActual->siguiente : nullptr;

    while (filaActual && filaAbajo) {
        NodoDoble<NodoDoble<char>> *nodoArriba = filaActual->dato.getInicio();
        NodoDoble<NodoDoble<char>> *nodoAbajo = filaAbajo->dato.getInicio();

        while (nodoArriba && nodoAbajo) {
            nodoArriba->abajo = nodoAbajo;
            nodoAbajo->arriba = nodoArriba;

            nodoArriba = nodoArriba->siguiente;
            nodoAbajo = nodoAbajo->siguiente;
        }
        filaActual = filaAbajo;
        filaAbajo = filaAbajo->siguiente;
    }
}


void Tablero::bloquearCasillasAleatorias() {
    srand(time(0));
    int bloqueadas = 0;

    while (bloqueadas < 10) {
        int fila = rand() % filasColumnas;
        int columna = rand() % filasColumnas;

        NodoDoble<char> *nodo = obtenerNodo(fila, columna);
        if (nodo && nodo->dato == ' ') {
            nodo->dato = '#';
            bloqueadas++;
        }
    }
}

NodoDoble<char> *Tablero::obtenerNodo(int fila, int columna) {
    NodoDoble<Lista<NodoDoble<char> > > *filaNodo = listaTablero.getInicio();

    for (int i = 0; i < fila; i++) {
        if (filaNodo) filaNodo = filaNodo->siguiente;
    }

    if (filaNodo) {
        NodoDoble<NodoDoble<char> > *actual = filaNodo->dato.getInicio();
        for (int j = 0; j < columna; j++) {
            if (actual) actual = actual->siguiente;
        }
        if (actual) {
            return &actual->dato;
        }
    }
    return nullptr;
}

void Tablero::mostrarTablero(vector<Jugador> jugadores) {
    cout<<"mostrando tablero";
    NodoDoble<Lista<NodoDoble<char> > > *filaActual = listaTablero.getInicio();

    cout << "\n--------------TABLERO DE JUEGO---------------\n";
    while (filaActual) {
        NodoDoble<NodoDoble<char> > *actual = filaActual->dato.getInicio();

        while (actual) {
            if (actual->dato.dato == '#') {
                cout << "[\033[31m#\033[0m]";
            } else {
                cout << "[ ]";
            }
            actual = actual->siguiente;
        }

        cout << endl;
        filaActual = filaActual->siguiente;
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
