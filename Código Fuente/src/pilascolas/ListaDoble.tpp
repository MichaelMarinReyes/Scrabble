template<typename T>
NodoDoble<T>::NodoDoble(const T data) {
  this->data = data;
  this->siguiente = nullptr;
  this->anterior = nullptr;
  this->arriba = nullptr;
  this->abajo = nullptr;
}

template<typename T>
NodoDoble<T>::~NodoDoble() {}

template<typename T>
T NodoDoble<T>::getData() const {  // Agregado const
  return data;
}

template<typename T>
NodoDoble<T>* NodoDoble<T>::getSiguiente() const {  // Agregado const
  return siguiente;
}

template<typename T>
NodoDoble<T>* NodoDoble<T>::getAnterior() const {
  return anterior;
}

template<typename T>
NodoDoble<T>* NodoDoble<T>::getArriba() const {
  return arriba;
}

template<typename T>
NodoDoble<T>* NodoDoble<T>::getAbajo() const {
  return abajo;
}

template<typename T>
void NodoDoble<T>::setSiguiente(NodoDoble<T>* siguiente) {
  this->siguiente = siguiente;
}

template<typename T>
void NodoDoble<T>::setAnterior(NodoDoble<T>* anterior) {
  this->anterior = anterior;
}

template<typename T>
void NodoDoble<T>::setArriba(NodoDoble<T>* arriba) {
  this->arriba = arriba;
}

template<typename T>
void NodoDoble<T>::setAbajo(NodoDoble<T>* abajo) {
  this->abajo = abajo;
}

template<typename T>
void NodoDoble<T>::setData(const T data) {  // Implementación de setData
  this->data = data;
}

// Implementación de ListaDoble.tpp

template <typename T>
ListaDoble<T>::ListaDoble() {
  cabeza = nullptr;
  cola = nullptr;
  tamaño = 0;
}

template <typename T>
ListaDoble<T>::~ListaDoble() {
  limpiar();
}

template <typename T>
void ListaDoble<T>::agregar(const T& data) {
    NodoDoble<T>* nodoNuevo = new NodoDoble<T>(data);
    if (tamaño == 0) {
        cabeza = cola = nodoNuevo;
    } else {
        nodoNuevo->setAnterior(cola);
        cola->setSiguiente(nodoNuevo);
        cola = nodoNuevo;
    }
    tamaño++;
}

template <typename T>
void ListaDoble<T>::eliminar(const T& data) {
    if (tamaño == 0) {
      return;
    }
    NodoDoble<T>* actual = cabeza;
    while (actual) {
        if (actual->getData() == data) {
            if (actual == cabeza) {
                cabeza = cabeza->getSiguiente();
                if (cabeza) {
                    cabeza->setAnterior(nullptr); // Corregido
                } else {
                    cola = nullptr;
                }
            } else if (actual == cola) {
                cola = cola->getAnterior();
                if (cola) {
                    cola->setSiguiente(nullptr);
                }
            } else {
                actual->getAnterior()->setSiguiente(actual->getSiguiente());
                if (actual->getSiguiente()) {
                    actual->getSiguiente()->setAnterior(actual->getAnterior());
                }
            }
            delete actual;
            --tamaño;
            return;
        }
        actual = actual->getSiguiente();
    }
}

template <typename T>
void ListaDoble<T>::mostrar() {
    NodoDoble<T>* actual = cabeza;
    while (actual) {
        cout << actual->getData() << " ";
        actual = actual->getSiguiente();
    }
    cout << endl;
}

template <typename T>
void ListaDoble<T>::limpiar() {
    while (cabeza) {
        NodoDoble<T>* temp = cabeza;
        cabeza = temp->getSiguiente();
        delete temp;
    }
    cola = nullptr;
    tamaño = 0;
}

template <typename T>
bool ListaDoble<T>::listaVacia() {
    return tamaño == 0;
}

template <typename T>
size_t ListaDoble<T>::getTamaño() {
    return tamaño;
}
