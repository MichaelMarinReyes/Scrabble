#pragma once
#include "Lista.hpp"
#include "NodoSimple.hpp"
#include <iostream>
using namespace std;

template<typename T>
Lista<T>::Lista(): cabeza(nullptr), cola(nullptr){}

template <typename T>
Lista<T>::~Lista() {
  while (cabeza) {
    NodoSimple<T>* temp = cabeza;
    cabeza = cabeza->siguiente;
    delete temp;
}

template <typename T>
void Lista<T>::insertarInicio(T valor) {
    NodoSimple<T>* nuevoNodo = new NodoSimple<T>(valor);
    if(!cabeza) {
      cabeza = nuevoNodo;
      cola = nuevoNodo;
    } else {
      nuevoNodo->siguiente = cabeza;
      cabeza = nuevoNodo;
    }
}

template <typename T>
void Lista<T>::insertarFinal(T valor) {
   NodoSimple<T>* nuevoNodo = new NodoSimple<T>(valor);
      if (!cola) {
          cabeza = nuevoNodo;
          cola = nuevoNodo;
      } else {
          cola->siguiente = nuevoNodo;
          cola = nuevoNodo;
      }
}

template <typename T>
bool Lista<T>::eliminar(T valor) {
      if (!cabeza) {
          return false;
      }
      NodoSimple<T>* actual = cabeza;
      NodoSimple<T>* anterior = nullptr;

      while (actual) {
          if (actual->data == valor) {
              if (anterior) {
                  anterior->siguiente = actual->siguiente;
              } else {
                  cabeza = actual->siguiente;
              }
              if (actual == cola) {
                  cola = anterior;
              }
              delete actual;
              return true;
          }
          anterior = actual;
          actual = actual->siguiente;
      }
      return false;
}

template <typename T>
void Lista<T>::mostrar() const {
    NodoSimple<T>* actual = cabeza;
    while(actual) {
        cout << actual->data << " ";
        actual = actual->siguiente;
    }
    cout << endl;
}