//
// Created by michael on 22/02/25.
//

#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>

using namespace std;

class Jugador {
private:
    string nombre;
    int fichas;
    int puntuacion;
public:
    Jugador(string nombre, int fichas, int puntuacion) {
        this-> nombre = nombre;
        this-> fichas = fichas;
        this-> puntuacion = puntuacion;
    }
    ~Jugador();
};


#endif //JUGADOR_H
