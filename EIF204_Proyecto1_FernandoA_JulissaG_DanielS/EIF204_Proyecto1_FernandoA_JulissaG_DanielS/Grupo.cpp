#include "Grupo.h"
Grupo::Grupo(int cu, int num, string id, string nom, Fecha* fec, string ini, string fin, char d, int dura) {
	cupo = cu;
	numGrupo = num;
	idInstructor = id;
	nombreInstructor = nom;
	inicio = fec;
	horaInicio = ini;
	horaFin = fin;
	dia = d;
	duracion = dura;
}
Grupo:: ~Grupo() {
	if (inicio != NULL) {
		delete inicio;
	}
}

int Grupo::getCupo() { return cupo; }
int Grupo::getNumGrupo() { return numGrupo; }
string Grupo::getIdInstructor() { return idInstructor; }
string Grupo::getNombreInstructor() { return nombreInstructor; }
Fecha* Grupo::getInicio() { return inicio; }
string Grupo::getHoraInicio() { return horaInicio; }
string Grupo::getHoraFin() { return horaFin; }
char Grupo::getDia() { return dia; }
int Grupo::getDuracion() { return duracion; }
Lista<Deportista>* Grupo::getListaMatric() { return listaMatric; }

void Grupo::setCupo(int cu) { cupo = cu; }
void Grupo::setIdInstructor(string id) { idInstructor = id; }
void Grupo::setNombreInstructor(string nom) { nombreInstructor = nom; }
void Grupo::setInicio(Fecha* fec) { inicio = fec; }
void Grupo::setHoraInicio(string ini) { horaInicio = ini; }
void Grupo::setHoraFin(string fin) { horaFin = fin; }
void Grupo::setDia(char d) { dia = d; }
void Grupo::setDuracion(int dura) { duracion = dura; }

string Grupo::toString() {
	stringstream s;
	s << "Nombre del Curso: " << endl // NOMBRE CURSO PENDIENTE
		<< "Numero de Grupo: " << numGrupo << endl
		<< "ID del Instructor: " << idInstructor << endl
		<< "Nombre del Instructor: " << nombreInstructor << endl
		<< "Cupo Maximo: " << cupo << endl
		<< "Cantidad Matriculados: " << listaMatric->getCantidad() << endl // PENDIENTE
		<< "Dia: " << dia << endl
		<< "Horario: " << horaInicio << " - " << horaFin;
	return s.str();
}