//
// Created by michael on 22/02/25.
//

#include "Juego.h"
#include <iostream>
#include "../utils/CargaDatos.h"
using namespace std;

void Juego::menuPrincipal() {
    int opcion;
    do {
        cout<< "\n---Menu de Opciones---\n";
        cout<< "1. Jugar\n";
        cout<< "2. Reportes\n";
        cout<< "0. Salir\n";
        cout<< "Selecciones una opción ingresadno un dídigo correspondiente: ";
        cin >> opcion;

        switch (opcion) {
            case 0:
                cout<< "Saliendo del juego";
            break;
            case 1:
                comenzarJuego();
            break;
            case 2:
                cout << "Reportes";
            break;
            default:
                cout << " Ingrese una opción válida\n";
            cout << "___________________________\n";
            break;
        }
    } while (opcion < 0 || opcion > 2);

}

void Juego::comenzarJuego() {
    string jugador1;
    string jugador2;

    cout << "\n-- REGISTRO DE JUGADORES --\n";
    cout << "Ingrese su nombre jugador 1: ";
    cin >> jugador1;
    cout << "Ingrese su nombre jugador 2: ";
    cin >> jugador2;

    CargaDatos cargarDatos;
    cargarDatos.leerCsv();
}

void Juego::mostrarReportes() {
    cout << "\n--- REPORTES ---\n";
}
