#pragma once
#include <iostream>
#include <sstream>

using namespace std;

template<class T>
class Nodo {
private:
	Nodo<T>* siguienteNodo;
	T* ptr;

public:
	Nodo(Nodo<T>*, T*);
	virtual ~Nodo();

	Nodo<T>* getSiguiente();
	T* getPuntero();

	void setSiguiente(Nodo<T>*);
	void setPuntero(T*);

	string toString();
};

template<class T>
Nodo<T>::Nodo(Nodo<T>* sig, T* newPtr) : siguienteNodo(sig), ptr(newPtr) {}

template<class T>
Nodo<T>::~Nodo() {
	if (siguienteNodo != NULL) {
		delete siguienteNodo;
	}
	if (ptr != NULL) {
		delete ptr;
	}
}

template<class T>
Nodo<T>* Nodo<T>::getSiguiente() { return siguienteNodo; }

template<class T>
T* Nodo<T>::getPuntero() { return ptr; }

template<class T>
void Nodo<T>::setSiguiente(Nodo<T>* sig) {
	if (siguienteNodo == NULL) {
		siguienteNodo = sig;
	}
	else {
		sig->setSiguiente(siguienteNodo);
	}
	siguienteNodo = sig;
}

template<class T>
void Nodo<T>::setPuntero(T* newPtr) {
	if (ptr != NULL) {
		delete ptr;
	}
	ptr = newPtr;
}

template<class T>
string Nodo<T>::toString() {
	return string();
}