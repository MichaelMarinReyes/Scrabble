//
// Created by michael on 25/02/25.
//

#include "Pila.hpp"
#include "NodoSimple.hpp"

template<class T>
Pila<T>::Pila() {
    nodo = nullptr;
}

template<class T>
Pila<T>::~Pila() {
    while (!estaVacia()) {
        eliminar();
    }
}

template<class T>
bool Pila<T>::estaVacia() const {
    return nodo == nullptr;
}

template<class T>
void Pila<T>::insertar(const T &valor) {
    NodoSimple<T> *nuevoNodo = new NodoSimple<T>(valor);
    nuevoNodo->setSiguiente(nodo);
    nodo = nuevoNodo;
}

template<class T>
T Pila<T>::eliminar() {
    if (estaVacia()) {
        throw out_of_range("Pila vacia");
    }
    NodoSimple<T> *aux = nodo;
    T valor = aux->getValor();
    nodo = nodo->setSiguiente();
    delete aux;
    return valor;
}

template<class T>
T Pila<T>::mostrar() const {
    if (estaVacia()) {
        throw out_of_range("Pila vacia");
    }
    return nodo->getDato();
}
