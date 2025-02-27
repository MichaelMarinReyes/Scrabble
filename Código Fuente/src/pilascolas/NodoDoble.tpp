
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
T NodoDoble<T>::getData() const {
  return data;
}

template<typename T>
NodoDoble<T>* NodoDoble<T>::getSiguiente() {
  return siguiente;
}

template<typename T>
NodoDoble<T>* NodoDoble<T>::getAnterior() {
  return anterior;
}

template<typename T>
NodoDoble<T>* NodoDoble<T>::getArriba() {
  return arriba;
}

template<typename T>
NodoDoble<T>* NodoDoble<T>::getAbajo() {
  return abajo;
}

template<typename T>
void NodoDoble<T>::setData(const T data) {
  this->data = data;
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
