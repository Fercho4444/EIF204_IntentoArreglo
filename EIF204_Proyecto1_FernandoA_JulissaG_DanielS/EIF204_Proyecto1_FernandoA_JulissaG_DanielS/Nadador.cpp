#include "Nadador.h"

Nadador::Nadador(double masa, double pe, double grasa) {
	masaMuscular = masa;
	peso = pe;
	porceGrasaCorporal = grasa;
}
Nadador::~Nadador(){}
double Nadador::getMasaMuscular() { return masaMuscular; }
double Nadador::getPeso() { return peso; }
double Nadador::getPorceGrasaCorporal() { return porceGrasaCorporal; }

void Nadador::setMasaMuscular(double masa ){ masaMuscular = masa; }
void Nadador::setPeso(double pe){ peso = pe; }
void Nadador::setPorceGrasaCorporal(double grasa){ porceGrasaCorporal = grasa; }

string Nadador::toString() {
	stringstream s;
	s << "Natacion: " << endl
		<< "	Masa Muscular: " << masaMuscular << endl
		<< "	Peso: " << peso << " kg" << endl
		<< "	Porcentaje de grasa Corporal: " << porceGrasaCorporal << "%" << endl;

	return s.str();
}