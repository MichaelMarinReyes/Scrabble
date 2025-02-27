//
// Created by michael on 25/02/25.
//

#ifndef LISTA_H
#define LISTA_H
//#include "NodoDoble.h"

template<typename T>

class Lista {
private:
   /* NodoDoble<T>* cabeza;
    NodoDoble<T>* cola;*/

public:
    Lista(); /*cabeza(nullptr), cola(nullptr) {}*/
    ~Lista();
    void insertarInicio(T valor);
    void insertarFinal(T valor);
    bool eliminar(T valor);
    void mostrar() const;
    void mostrarReversa() const;
    //NodoDoble<T>* getInicio();
};

#include "Lista.tpp"

#endif
