//
// Created by michael on 22/02/25.
//

#include "CargaDatos.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

vector<string> CargaDatos::getFila() {
    vector<string> fila;
}

void CargaDatos::leerCsv() {
    cout << "\n--- CARGA DE ARCHIVO CSV ---" << endl;

    while (true) {
        cout << "Ingrese la ubicación del archivo CSV:\n";
        cin >> path;

        if (!verificarExtension(path)) {
            cerr << "Error: La extensión del archivo debe ser \".csv\"\n";
            continue;
        }

        ifstream archivo(path);
        if (!archivo.is_open()) {
            cerr << "Error al abrir el archivo: " << path << endl;
            cerr << "Verifique la ruta y que el archivo exista\n";
            continue;
        }

        string linea;
        while (getline(archivo, linea)) {
            stringstream ss(linea);
            string palabra;
            fila.clear();

            while (getline(ss, palabra, delimitador)) {
                fila.push_back(palabra);
            }

            mostrarPalabras();
        }

        archivo.close();
        break;
    }
}

void CargaDatos::ordenarPalabras() {
}

void CargaDatos::obtenerTotalLetras() {
}

void CargaDatos::mostrarPalabras() {
    for (const string &palabra: fila) {
        cout << palabra << " | ";
    }
    cout << endl;
}

bool CargaDatos::verificarExtension(const string &archivo) {
    return archivo.size() > 4 && archivo.substr(archivo.size() - 4) == ".csv";
}
