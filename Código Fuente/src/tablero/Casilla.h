//
// Created by michael on 25/02/25.
//

#ifndef CASILLA_H
#define CASILLA_H



class Casilla {
private:
    char letra;
    bool puedeColocar;

public:
    Casilla() : letra(' '), puedeColocar(true) {}
    bool estaOcupada() {
        return letra != ' ';
    }
};



#endif
