//
// Created by michael on 25/02/25.
//

#include "ColaTurno.hpp"
#include "../juego/Jugador.h"
#include "NodoSimple.hpp"
using namespace std;

template<class T>
ColaTurno<T>::ColaTurno() {
    frente = nullptr;
    fin = nullptr;
}

template<class T>
ColaTurno<T>::~ColaTurno() {
    while (!estaVacia()) {
        eliminar();
    }
}

template<class T>
bool ColaTurno<T>::estaVacia() const {
    return frente == nullptr;
}

template<class T>
void ColaTurno<T>::agregar(const T *dato) {
    NodoSimple<T> *nuevoNodo = new NodoSimple<T>(dato);
    if (estaVacia()) {
        frente = nuevoNodo;
        fin = nuevoNodo;
    } else {
        fin->setSiguiente(nuevoNodo);
    }
}

template<class T>
T *ColaTurno<T>::eliminar() {
    if (estaVacia()) {
        throw invalid_argument("No se eliminar el cola");
    }
    NodoSimple<T> *aux = frente;
    T *dato = aux->getDato();
    frente = frente->siguiente;
    if (frente == nullptr) {
        fin = nullptr;
    }
    delete aux;
    return dato;
}

template<class T>
T *ColaTurno<T>::mostrar() const {
    if (estaVacia()) {
        throw invalid_argument("No se eliminar el cola");
    }
    return frente->getDato();
}

template<class T>
void ColaTurno<T>::mostrarTodos() {
    NodoSimple<T> *aux = frente;
    if (estaVacia()) {
        cout << "Cola vacia\n";
        return;
    }

    cout << "Elementos en la cola:\n";
    while (aux != nullptr) {
        Jugador *jugador = aux->getDato();
        cout << "\033[32mJugador:\033[0m " << jugador->getNombre() << "\n";
        cout << "\t\033[34mFichas:\033[0m ";
        jugador->mostrarFichas();
        cout << "\n";
        aux = aux->siguiente;
    }
    cout << endl;
}