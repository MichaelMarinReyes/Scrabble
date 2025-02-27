#include "NodoDoble.hpp"
#include <cstddef>

using namespace std;

template <typename T>
class ListaDoble {
  private:
    NodoDoble<T>* cabeza;
    NodoDoble<T>* cola;
    size_t tamaño;

  public:
    ListaDoble();
    ~ListaDoble();
    void agregar(const T& data);
    void eliminar(const T& data);
    void mostrar();
    void limpiar();
    bool listaVacia();
    size_t getTamaño();
};

#include "ListaDoble.tpp"