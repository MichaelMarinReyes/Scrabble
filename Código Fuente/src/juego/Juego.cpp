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
                mostrarReportes();
                break;
            default:
                cout << " Ingrese una opción válida\n";
                cout << "___________________________\n";
                break;
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

        if (cantidadJugadores < 2 || cantidadJugadores > 5) {
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
    cargarDatos.leerCsv();
    Tablero tablero;
    tablero.mostrarTablero(jugadores);

    //jugarTurnos();
}

void Juego::jugarTurnos(Tablero& tablero) {
    /*int turno = 0;
    while (true) {
        Jugador& jugadorActual = jugadores[turno];

        // Mostrar las fichas del jugador y permitirle elegir una ficha
        cout << "\nTurno de: " << jugadorActual.getNombre() << endl;
        jugadorActual.mostrarFichas();

        char fichaElegida;
        cout << "Elige una ficha de tu inventario (un caracter): ";
        cin >> fichaElegida;

        // Verificar si la ficha elegida es válida
        if (!jugadorActual.tieneFicha(fichaElegida)) {
            cout << "No tienes esta ficha. Intenta de nuevo.\n";
            continue;
        }

        // Mostrar el tablero para que el jugador elija dónde colocar la ficha
        tablero.mostrarTablero(jugadores);

        int fila, columna;
        cout << "Elige la fila y columna para colocar la ficha: ";
        cout << "\nFila: ";
        cin >> fila;
        cout << "Columna: ";
        cin >> columna;

        // Verificar si la posición es válida
        if (tablero.colocarFicha(fila, columna, fichaElegida)) {
            cout << "¡Ficha colocada correctamente!\n";
            jugadorActual.usarFicha(fichaElegida);  // El jugador usa la ficha

            // Verificar si el juego ha terminado
            if (verificarFinDeJuego()) {
                cout << "El juego ha terminado. ¡Gracias por jugar!" << endl;
                break;
            }
        } else {
            cout << "¡Posición inválida! Intenta de nuevo.\n";
        }

        // Rotar el turno
        turno = (turno + 1) % jugadores.size();
    }

    // Al finalizar el juego, mostrar los resultados
    mostrarResultados();*/
}

bool Juego::verificarFinDeJuego() {
    // Verificar si el juego ha terminado, por ejemplo, si se acabaron las fichas
    // o si no se pueden formar más palabras.
    // Este es un lugar donde puedes añadir más lógica.
    return false;  // Esto es un marcador de posición; debes implementarlo según las reglas.
}

void Juego::mostrarResultados() {
    cout << "\n--- Resultados ---\n";

}

void Juego::mostrarReportes() {
    cout << "\n--- REPORTES ---\n";
    cout << "Historial de palabras jugadas:\n";
    // Mostrar las palabras jugadas desde la pila

    // Mostrar historial de palabras no encontradas
    cout << "\nPalabras no encontradas:\n";
    // Implementar el almacenamiento de palabras no encontradas y mostrarlas
    // Aquí puedes guardar las palabras no encontradas en una lista o en otro lugar.
    cout << "\nLista de jugadores ordenada por puntaje y nombre:\n";
    mostrarResultados();

    // Resumen del tiempo promedio de cada turno
    cout << "\nResumen del tiempo promedio de cada turno:\n";
    // Implementar el cálculo del tiempo promedio por turno
    cout << "\nCantidad de movimientos realizados por cada jugador:\n";

}