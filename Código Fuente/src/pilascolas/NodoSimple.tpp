#include "NodoSimple.hpp"

template<class T>
NodoSimple<T>::NodoSimple(const T* valor) {
    this->dato = new T(*valor);
    this->siguiente = nullptr;
}

template<class T>
NodoSimple<T>::~NodoSimple() {
    delete dato;
}


template<class T>
T* NodoSimple<T>::getDato() {
    return dato;
}

template<class T>
void NodoSimple<T>::setDato(const T* dato) {
    this->dato = new T(*dato);
}

template<class T>
void NodoSimple<T>::setSiguiente(NodoSimple<T>* siguiente) {
    this->siguiente = siguiente;
}
