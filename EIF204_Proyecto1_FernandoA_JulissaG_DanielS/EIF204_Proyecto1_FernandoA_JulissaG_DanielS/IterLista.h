#pragma once
#include "Lista.h" // SI DA ERROR, REEMPLAZAR POR NODO.H

template<class T>
class IterLista {
private:
	Nodo<T>* actual;

public:
	IterLista(Nodo<T>*);
	virtual ~IterLista();

	bool masElementos();
	T* proximoElemento();
	string toString();

	// CUSTOM
	bool elemDetectado(T*);
};

template<class T>
IterLista<T>::IterLista(Nodo<T>* nodoPrimero) : actual(nodoPrimero) {}

template<class T>
IterLista<T>::~IterLista() {}

template<class T>
bool IterLista<T>::masElementos() {
	return actual != NULL;
}

template<class T>
T* IterLista<T>::proximoElemento() {
	T* ptr = NULL;
	if (masElementos()) {
		ptr = actual->getPuntero();
		actual = actual->getSiguiente();
	}
	return ptr;
}

template<class T>
string IterLista<T>::toString() {
	return "";
}

// CUSTOM
template<class T>
bool IterLista<T>::elemDetectado(T* ptrRec) {
	T* ptrElem = NULL;
	//while (masElementos()) {
	//	ptrElem = proximoElemento();
	//	if (*ptrElem == *ptrRec) { // REALIZAR SOBRECARGA DE == EN DEPORTISTA, LUEGO OTRAS CLASES. CONSULTAR AL PROFE CAAMANO
	//		return true;
	//	}
	//}
	return false;
}