//
// Created by michael on 25/02/25.
//

#include "ListaCaracteres.h"
#include <iostream>

using namespace std;

ListaCaracteres::ListaCaracteres() {
    lista = NULL;
}

ListaCaracteres::~ListaCaracteres() {
    NodoLetras *actual = lista;
    while (actual != NULL) {
        NodoLetras *temp = actual;
        actual = actual->siguiente;
        delete temp;
    }
}

NodoLetras *ListaCaracteres::getInicio() {
    return lista;
}

void ListaCaracteres::insertarLista(char letra) {
    NodoLetras *nuevoNodo = new NodoLetras();
    nuevoNodo->dato = letra;
    nuevoNodo->siguiente = NULL;

    if (lista == NULL) {
        lista = nuevoNodo;
        return;
    }

    NodoLetras *aux = lista;
    while (aux->siguiente != NULL) {
        aux = aux->siguiente;
    }

    aux->siguiente = nuevoNodo;
}

void ListaCaracteres::imprimirLista() {
    NodoLetras *aux = lista;
    while (aux != NULL) {
        std::cout << aux->dato << " -> ";
        aux = aux->siguiente;
    }
    std::cout << " " << std::endl;
}

void ListaCaracteres::mostrarLista(NodoLetras *lista) {
    NodoLetras *actual = new NodoLetras();

    actual = lista;
    while (actual != NULL) {
        cout << actual->dato << " -> ";
        actual = actual->siguiente;
    }
}

void ListaCaracteres::buscarLetra(char letra) {
    bool encontrado = false;
    NodoLetras *actual = lista;

    while (actual != NULL) {
        if (actual->dato == letra) {
            encontrado = true;
        }
        actual = actual->siguiente;
    }

    if (encontrado == true) {
        cout << letra;
    } else {
        cout << "No se encontró el caracter\n";
    }
}

void ListaCaracteres::eliminarLetra(char letra) {
    NodoLetras *auxBorrar;
    NodoLetras *anterior = NULL;

    if (lista != NULL) {
        NodoLetras *auxBorrar;
        NodoLetras *anterior = NULL;
    }

    auxBorrar = lista;

    while ((auxBorrar != NULL) && (auxBorrar->dato != letra)) {
        anterior = auxBorrar;
        auxBorrar = auxBorrar->siguiente;
    }

    if (anterior == NULL) {
        cout << "No se encontró: " << letra << endl;
    } else if (anterior == NULL) {
        lista = lista->siguiente;
        delete auxBorrar;
    } else {
        anterior->siguiente = auxBorrar->siguiente;
        delete auxBorrar;
    }
}

void ListaCaracteres::limpiarListaLetras() {
    NodoLetras *actual;
    while (lista != NULL) {
        actual = lista;
        lista = lista->siguiente;
        delete actual;
    }
}
