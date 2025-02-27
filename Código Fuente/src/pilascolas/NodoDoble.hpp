#pragma once

template<typename T>
class NodoDoble {
private:
    T data;

public:
    NodoDoble<T> *siguiente;
    NodoDoble<T> *anterior;
    NodoDoble<T> *arriba;
    NodoDoble<T> *abajo;
    NodoDoble(const T data);
    ~NodoDoble();
    T getData() const;
    NodoDoble<T> *getSiguiente();
    NodoDoble<T> *getAnterior();
    NodoDoble<T> *getArriba();
    NodoDoble<T> *getAbajo();
    void setData(const T data);
    void setSiguiente(NodoDoble<T> *siguiente);
    void setAnterior(NodoDoble<T> *anterior);
    void setArriba(NodoDoble<T> *arriba);
    void setAbajo(NodoDoble<T> *abajo);
};

#include "NodoDoble.tpp"