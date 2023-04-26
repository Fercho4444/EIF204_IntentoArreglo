#include "Corredor.h"
Corredor::Corredor(char sex, double estatu) {
	sexo = sex;
	estatura = estatu;
}
Corredor:: ~Corredor(){}

char Corredor::getSexo() { return sexo; }
double Corredor::getEstatura() { return estatura; }

void Corredor::setSexo(char sex){ sexo = sex; }
void Corredor::setEstatura(double estatu){ estatura = estatu; }

string Corredor::toString() {
	stringstream s;
	s << "Carrera a pie: " << endl
		<< "	Sexo: " << sexo << endl
		<< "	Estatura: " << estatura << " cm" << endl;

	return s.str();
}