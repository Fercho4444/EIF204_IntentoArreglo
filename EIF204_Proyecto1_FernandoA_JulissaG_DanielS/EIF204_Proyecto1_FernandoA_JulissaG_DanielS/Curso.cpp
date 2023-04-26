#include "Curso.h"

Curso::Curso(string cod, string nom, string ni, int cant, string desc){
	codigo = cod;
	nombre = nom;
	nivel = ni;
	cantGrupos = cant;
	descripcion = desc;
	grupos = new Lista<Grupo>();
}
Curso:: ~Curso(){
	if (grupos != NULL) {
		delete grupos;
	}
}

string Curso::getCodigo() { return codigo; }
string Curso::getNombre() { return nombre; }
string Curso::getNivel() { return nivel; }
int Curso::getCantGrupos() { return cantGrupos; }
string Curso::getDescripcion() { return descripcion; }
Lista<Grupo>* Curso::getGrupos() { return grupos; }

void Curso::setCodigo(string cod) { codigo = cod; }
void Curso::setNombre(string nom) { nombre = nom; }
void Curso::setNivel(string ni) { nivel = ni; }
void Curso::setCantGrupos(int cant) { cantGrupos = cant; }
void Curso::setDescripcion(string desc) { descripcion = desc; }
void Curso::setGrupos(Lista<Grupo>* lista) { grupos = lista; }

string Curso::toString(){
	stringstream s;
	s << "Nombre del curso: " << nombre << endl
		<< "Descripcion: " << descripcion << endl
		<< "Nivel: " << nivel << endl
		<< "Cantidad de grupos: " << cantGrupos << endl
		<< "Lista de Grupos: " << endl; // PENDIENTE
	return s.str();
}