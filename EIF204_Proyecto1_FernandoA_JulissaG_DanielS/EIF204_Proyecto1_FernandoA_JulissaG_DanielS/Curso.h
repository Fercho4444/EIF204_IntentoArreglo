#pragma once
#include "Grupo.h"

class Curso {
private:
	string codigo;
	string nombre;
	string nivel;
	int cantGrupos;
	string descripcion;
	Lista<Grupo>* grupos;

public:
	Curso(string, string, string, int, string);
	virtual ~Curso();

	string getCodigo();
	string getNombre();
	string getNivel();
	int getCantGrupos();
	string getDescripcion();
	Lista<Grupo>* getGrupos();

	void setCodigo(string);
	void setNombre(string);
	void setNivel(string);
	void setCantGrupos(int);
	void setDescripcion(string);
	void setGrupos(Lista<Grupo>*);

	string toString();
	
};