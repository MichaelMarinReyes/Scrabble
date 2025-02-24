//
// Created by michael on 23/02/25.
//

#ifndef NONO_H
#define NONO_H
#include <iostream>
#include <string>

using namespace std;

class Nodo {
public:
    char letra;
    int valor;
    bool bloqueada;
    Nodo* siguiente;
    Nodo* abajo;

    Nodo(char letra = ' ', bool bloqueada = false) {
        this -> letra = letra;
        this -> bloqueada = bloqueada;
        this -> siguiente = nullptr;
        this -> abajo = nullptr;
    }
};

#endif //NONO_H
