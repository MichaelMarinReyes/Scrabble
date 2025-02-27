
template<typename T>
NodoSimple<T>::NodoSimple(T data) {
    this->dato = data;
    this->siguiente = nullptr;
}

template<class T>
T NodoSimple<T>::getDato() {
    return dato;
}

template<class T>
void NodoSimple<T>::setDato(T dato) {
    this->dato = dato;
}

template<class T>
void NodoSimple<T>::setSiguiente(NodoSimple<T> *siguiente) {
    this->siguiente = siguiente;
}

