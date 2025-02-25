//
// Created by michael on 25/02/25.
//

#ifndef FICHA_H
#define FICHA_H


class Ficha {
private:
    char letra;
    int valor;

public:
    Ficha(char letra, int valor) : letra(letra), valor(valor) {}
    int obtenerValor() {
        return valor;
    }
};



#endif
