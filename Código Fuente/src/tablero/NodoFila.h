//
// Created by michael on 22/02/25.
//

#ifndef NODOFILA_H
#define NODOFILA_H
#include "NodoCelda.h"


class NodoFila {
public:
    NodoCelda* primeraCelda;
    NodoFila* abajo;

    NodoFila() : primeraCelda(nullptr), abajo(nullptr) {}
};



#endif //NODOFILA_H
