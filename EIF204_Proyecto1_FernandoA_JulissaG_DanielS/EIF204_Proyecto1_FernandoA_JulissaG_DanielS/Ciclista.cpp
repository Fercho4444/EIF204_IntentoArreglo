#include "Ciclista.h"

Ciclista::Ciclista(string nom, string ced, string tel, int hor, double temp, int diaNac, int mesNac, int anioNac):  Deportista(nom, ced, tel, diaNac, mesNac, anioNac) {
	horas = hor;
	temPromedio = temp;
}
Ciclista:: ~Ciclista() {}

int Ciclista::getHoras() { return horas; }
double Ciclista::getTemPromedio() { return temPromedio; }


void Ciclista::setHoras(int hor) { horas = hor; }
void Ciclista::setTemPromedio(double temp) { temPromedio = temp; }

string Ciclista::toString() {
	stringstream s;
	s << "	Nombre: " << nombre << endl
		<< "	Cedula: " << cedula << endl
		<< "	Telefono: " << telefono << endl
		<< "	Fecha de Nacimiento: " << fechaNac->toString()
		<< endl << "Ciclismo: " << endl
		<< "	Horas: " << horas << endl
		<< "	Temporizador Promedio: " << temPromedio << endl;

	return s.str();
}