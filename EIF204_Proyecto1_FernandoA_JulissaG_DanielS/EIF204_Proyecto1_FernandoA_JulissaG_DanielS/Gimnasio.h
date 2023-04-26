#pragma once
#include "Triatlonista.h"
#include "Curso.h"
#include "Utilidades.h"
#include <fstream>

class Gimnasio {
private:
	Lista<Deportista>* listaDeportistas;
	Lista<Curso>* listaCursos;
	Fecha* fechaActual;
	string nombre;
	double montoActual;

public:
	Gimnasio(int, int, int, string = "UNAFitness", double = 20000.00);
	virtual ~Gimnasio();

	Lista<Deportista>* getListaDeportistas();
	Lista<Curso>* getListaCursos();
	Fecha* getFechaActual();
	string getNombre();
	double getMontoActual();

	void setListaDeportistas(Lista<Deportista>*);
	void setListaCursos(Lista<Curso>*);
	void setFechaActual(Fecha*);
	void setNombre(string);
	void setMontoActual(double);

	string toString();

	// CUSTOM
	void cargarDatosGimnasio(ifstream&); // PENDIENTE
	void guardarDatosGimnasio(ofstream&);
};