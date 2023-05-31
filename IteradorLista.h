#pragma once
#include "Nodo.h"

template <class T>

class IteradorLista {
private:
	Nodo<T>* primero;
	Nodo<T>* actual;
public:
	IteradorLista(Nodo<T>*);
	virtual ~IteradorLista();
	bool vacia();
	Nodo<T>* getSig();
	bool hayMas();
};

template<class T>
 IteradorLista<T>::IteradorLista(Nodo<T>* _primero) {
	 primero = _primero;
	 actual = primero;
 }

 template<class T>
IteradorLista<T>::~IteradorLista() {
}

template<class T>
bool IteradorLista<T>::vacia() {
	return primero->getSig();
}

template<class T>
Nodo<T>* IteradorLista<T>::getSig() {
	if (hayMas()) {
		actual = actual->getSig();
		return actual;
	}
	return nullptr;
}

template<class T>
bool IteradorLista<T>::hayMas() {
	return actual->getSig();
}
