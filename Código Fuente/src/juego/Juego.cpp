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

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            cout << "Este menú solo admite valores numéricos\n";
            opcion = -1;
        } else {
            switch (opcion) {
                case 0:
                    cout << "Saliendo del juego";
                break;
                case 1:
                    comenzarJuego();
                break;
                case 2:
                    mostrarReportes();
                break;
                default:
                    cout << " Ingrese una opción válida\n";
                cout << "___________________________\n";
                break;
            }
        }
    } while (opcion < 0 || opcion > 2);
}

void Juego::comenzarJuego() {
    string nombreJugador;
    int cantidadJugadores;

    do {
        cout << "\n¿Cuántos jugadores entraran a la partida?\nPueden entrar de 2 a 5 jugadores:\n";
        cin >> cantidadJugadores;
        cin.ignore();

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            cout << "Este menú de opciones solo admite valores numéricos\n";
            cout << "---- Ingrese un número entre 2 y 5 ----\n";
        } else if (cantidadJugadores < 2 || cantidadJugadores > 5) {
            cout << "---- Ingrese un número entre 2 y 5 ----\n";
        }
    } while (cantidadJugadores < 2 || cantidadJugadores > 5);

    cout << "\n-- REGISTRO DE JUGADORES --\n";
    for (int i = 0; i < cantidadJugadores; i++) {
        cout << "Ingrese el nombre del jugador " << i + 1 << endl;
        getline(cin, nombreJugador);
        Jugador jugador(nombreJugador);
        jugadores.push_back(jugador);
    }

    CargaDatos cargarDatos;
    //cargarDatos.leerCsv();
    Tablero tablero;
    tablero.mostrarTablero(jugadores);

    //jugarTurnos();
}

void Juego::jugarTurnos(Tablero& tablero) {
    mostrarResultados();
}

bool Juego::verificarFinDeJuego() {
    return false;
}

void Juego::mostrarResultados() {
    cout << "\n--- Resultados ---\n";

}

void Juego::mostrarReportes() {
    cout << "\n--- REPORTES ---\n";
    cout << "Historial de palabras jugadas:\n";

    cout << "\nPalabras no encontradas:\n";
    // Implementar el almacenamiento de palabras no encontradas y mostrarlas
    cout << "\nLista de jugadores ordenada por puntaje y nombre:\n";
    mostrarResultados();

    cout << "\nResumen del tiempo promedio de cada turno:\n";

    cout << "\nCantidad de movimientos realizados por cada jugador:\n";

}