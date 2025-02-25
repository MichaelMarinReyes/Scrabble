//
// Created by michael on 25/02/25.
//

#ifndef LISTACARACTERES_H
#define LISTACARACTERES_H
#include "NodoLetras.h"


class ListaCaracteres {
private:
    NodoLetras* inicio;
    NodoLetras *lista = NULL;
public:
    ListaCaracteres();
    ~ListaCaracteres();
    NodoLetras *getInicio();
    void insertarLista(char letra);
    void imprimirLista();
    void mostrarLista(NodoLetras *lista);
    void buscarLetra(char letra);
    void eliminarLetra(char letra);
    void limpiarListaLetras();
};



#endif
