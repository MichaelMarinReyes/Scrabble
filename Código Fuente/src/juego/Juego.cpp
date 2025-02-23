//
// Created by michael on 22/02/25.
//

#include "Juego.h"
#include <iostream>

#include "../tablero/Tablero.h"
#include "../utils/CargaDatos.h"
using namespace std;

void Juego::menuPrincipal() {
    int opcion;
    do {
        cout << "\n---Menu de Opciones---\n";
        cout << "1. Jugar\n";
        cout << "2. Reportes\n";
        cout << "0. Salir\n";
        cout << "Selecciones una opción ingresando un dídigo correspondiente: ";
        cin >> opcion;

        switch (opcion) {
            case 0:
                cout << "Saliendo del juego";
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
    int cantidadJugadores;

    do {
        cout << "\n¿Cuántos jugadores entraran a la partida?\nPueden entrar de 2 a 5 jugadores:\n";
        cin >> cantidadJugadores;

        if (cantidadJugadores < 2 || cantidadJugadores > 5) {
            cout << "---- Ingrese un número entre 2 y 5 ----\n";
        }
    } while (cantidadJugadores < 2 || cantidadJugadores > 5);

    cout << "\n-- REGISTRO DE JUGADORES --\n";
    for (int i = 0; i < cantidadJugadores; i++) {
        cout << "Ingrese el nombre del jugador " << i + 1 << endl;
        cin >> jugador1;
    }

    CargaDatos cargarDatos;
    cargarDatos.leerCsv();
    Tablero tablero;
    tablero.crearTablero();
    tablero.mostrarTablero();
}

void Juego::mostrarReportes() {
    cout << "\n--- REPORTES ---\n";
}
