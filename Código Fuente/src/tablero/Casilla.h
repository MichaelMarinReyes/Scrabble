#include <string>
#ifndef CASILLAS
#define CASILLAS
using namespace std;

class Casilla {
    private:
        string texto;
        int posicionX;
        int posicionY;

    public:
        Casilla();
        Casilla(string texto, int posicionX, int posicionY);
        void imprimirCasilla();
        void editarCasilla();
        void bloquearCasilla();
};

#endif