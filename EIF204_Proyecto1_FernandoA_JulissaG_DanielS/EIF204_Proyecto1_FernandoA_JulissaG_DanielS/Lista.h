#pragma once
#include "Nodo.h"
#include "IterLista.h"

template<class T>
class Lista {
private:
	Nodo<T>* ppio;

public:
	Lista();
	virtual ~Lista();

	Nodo<T>* getPPIO();

	void ingresarPrimero(T*);
	void ingresarUltimo(T*);
	int getCantidad();

	IterLista<T>* getIterador();
};

template<class T>
Lista<T>::Lista() {
	ppio = NULL;
}

template<class T>
Lista<T>::~Lista() {
	if (ppio != NULL) {
		delete ppio;
	}
}

template<class T>
Nodo<T>* Lista<T>::getPPIO() {
	return ppio;
}

template<class T>
void Lista<T>::ingresarPrimero(T* objPtr) {
	Nodo<T>* nodoPtr = new Nodo<T>(ppio, objPtr);
	if (ppio != NULL) {
		nodoPtr->setSiguiente(ppio);
	}
	ppio = nodoPtr;
}

template <class T>
void Lista<T>::ingresarUltimo(T* objPtr) {
	Nodo<T>* nodoAux = ppio;
	if (ppio == NULL) {
		ppio = new Nodo(NULL, objPtr);
	}
	else {
		while (nodoAux->getSiguiente() != NULL) {
			nodoAux = nodoAux->getSiguiente();
		}
		nodoAux->setSiguiente(new Nodo<T>(NULL, objPtr));
	}
}

template<class T>
int Lista<T>::getCantidad() {
	int count = 0;
	Nodo<T>* nodoAux = ppio;
	while (nodoAux != NULL) {
		count++;
		nodoAux = nodoAux->getSiguiente();
	}
	return count;
}

template<class T>
IterLista<T>* Lista<T>::getIterador() {
	return new IterLista<T>(ppio);
}