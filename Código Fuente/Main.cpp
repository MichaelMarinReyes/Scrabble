#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main() {
        menuPrincipal();
        
    return 0;
}

void menuPrincipal() {

    int opcion;
    do {

        cout<< "\n---Menu de Opciones---";
        cout<< "1. Jugar";
        cout<< "2. Reportes";
        cout<< "0. Salir";
        cout<< "Selecciones una opción ingresadno un dídigo correspondiente: ";
        cin >> opcion;
        switch (opcion) {
            case 0:
                cout<< "Iniciando juego";
                break;
            case 1:
                cout << "Reportes";
                break;
            default:
                cout << "Ingrese una opción válida";
                break;
        }
    } while (opcion < 0 || opcion > 2);

}