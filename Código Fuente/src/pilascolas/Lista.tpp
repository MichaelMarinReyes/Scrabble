#include "Lista.h"
#include <iostream>

using namespace std;

template <typename T>
Lista<T>::~Lista() {
    /*NodoDoble<T>* actual = cabeza;
    while (actual) {
        NodoDoble<T>* temp = actual;
        actual = actual->siguiente;
        delete temp;
    }
    cabeza = cola = nullptr;*/
}

template <typename T>
void Lista<T>::insertarInicio(T valor) {
    /*NodoDoble<T>* nuevo = new NodoDoble<T>(valor);
    if (!cabeza) {
        cabeza = cola = nuevo;
    } else {
        nuevo->siguiente = cabeza;
        cabeza->anterior = nuevo;
        cabeza = nuevo;
    }*/
}

template <typename T>
void Lista<T>::insertarFinal(T valor) {
   /* NodoDoble<T>* nuevo = new NodoDoble<T>(valor);
    if (!cola) {
        cabeza = cola = nuevo;
    } else {
        nuevo->anterior = cola;
        cola->siguiente = nuevo;
        cola = nuevo;
    }*/
}

template <typename T>
bool Lista<T>::eliminar(T valor) {
   /* if (!cabeza) return false;

    NodoDoble<T>* actual = cabeza;

    while (actual && actual->dato != valor) {
        actual = actual->siguiente;
    }

    if (!actual) return false;

    if (actual == cabeza) {
        cabeza = actual->siguiente;
        if (cabeza) cabeza->anterior = nullptr;
        else cola = nullptr;
    }

    if (actual == cola) {
        cola = actual->anterior;
        if (cola) cola->siguiente = nullptr;
        else cabeza = nullptr;
    }

    if (actual->anterior) actual->anterior->siguiente = actual->siguiente;
    if (actual->siguiente) actual->siguiente->anterior = actual->anterior;

    delete actual;*/
    return true;
}

template <typename T>
void Lista<T>::mostrar() const {/*
    NodoDoble<T>* actual = cabeza;
    while (actual) {
        cout << actual->dato << " <-> ";
        actual = actual->siguiente;
    }
    cout << "NULL" << endl;*/
}

template <typename T>
void Lista<T>::mostrarReversa() const {/*
    NodoDoble<T>* actual = cola;
    while (actual) {
        cout << actual->dato << " <-> ";
        actual = actual->anterior;
    }
    cout << "NULL" << endl;*/
}
/*
template<typename T>
NodoDoble<T> *Lista<T>::getInicio() {
    return cabeza;
}
*/