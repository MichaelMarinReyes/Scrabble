//
// Created by michael on 22/02/25.
//

#ifndef CARGADATOS_H
#define CARGADATOS_H
#include <vector>

#include <string>

using namespace std;

class CargaDatos {
private:
    string path;
    string linea;
    char delimitador = ',';
    vector<string> fila;


public:
    vector<string> getFila();
    void leerCsv();
    void ordenarPalabras();
    void obtenerTotalLetras();
    void mostrarPalabras();
    bool verificarExtension(const string& archivo);
};

#endif
