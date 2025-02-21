#ifndef CARGA_DATOS_H
#define CARGA_DATOS_H
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

#endif