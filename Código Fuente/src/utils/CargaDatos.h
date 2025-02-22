//
// Created by michael on 22/02/25.
//

#ifndef CARGADATOS_H
#define CARGADATOS_H

#include <string>

using namespace std;

class CargaDatos {
private:
    string path;
public:
    void leerCsv();
    void ordenarPalabras();
    void obtenerTotalLetras();
};

#endif //CARGADATOS_H
