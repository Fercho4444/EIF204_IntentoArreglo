#include "Triatlonista.h"


Triatlonista::Triatlonista(string nom, string ced, string tel, int hor, double temp, double masa, double pe, double grasa, char sex, double estatu, int ironMan, int triaGanados, int diaNac, int mesNac, int anioNac): Ciclista(nom, ced, tel, hor, temp, diaNac, mesNac, anioNac) {
	nadador = new Nadador(masa, pe, grasa);
	corredor = new Corredor(sex, estatu);
	cantIronMan = ironMan;
	cantTriaGanados = triaGanados;
}

Triatlonista:: ~Triatlonista() {
	delete corredor;
	delete nadador;
}

Nadador* Triatlonista::getNadador() { return nadador; }
Corredor* Triatlonista::getCorredor() { return corredor; }
int Triatlonista::getCantIronMan() { return cantIronMan; }
int Triatlonista::getCantTriaGanados() { return cantTriaGanados; }


void Triatlonista::setNadador(Nadador* nada){ nadador = nada; }
void Triatlonista::setCorredor(Corredor* corre){ corredor = corre; }
void Triatlonista::setCantIronMan(int ironMan){ cantIronMan = ironMan; }
void Triatlonista::setCantTriaGanados(int triaGanados){ cantTriaGanados = triaGanados; }


//NADADOR
double Triatlonista::getMasaMuscular() { return nadador->getMasaMuscular(); }
double Triatlonista::getPeso() { return nadador->getPeso(); }
double Triatlonista::getPorceGrasaCorporal() { return nadador->getPorceGrasaCorporal(); }

void Triatlonista::setMasaMuscular(double masa) { nadador->setMasaMuscular(masa); }
void Triatlonista::setPeso(double pes) { nadador->setPeso(pes); }
void Triatlonista::setPorceGrasaCorporal(double gras) { nadador->setPorceGrasaCorporal(gras); }



//CORREDOR
char Triatlonista::getSexo() { return corredor->getSexo(); }
double Triatlonista::getEstatura() { return corredor->getEstatura(); }

void Triatlonista::setSexo(char sex) { corredor->setSexo(sex); }
void Triatlonista::setEstatura(double esta) { corredor->setEstatura(esta); }

// TOSTRINGS
string Triatlonista::toStringNadador() { return nadador->toString(); }
string Triatlonista::toStringCorredor() { return corredor->toString(); }


string Triatlonista::toString() {
	stringstream s;
	s << "-INFORMACION DEL CLIENTE-" << endl
		<< Ciclista::toString()
		<< endl << toStringNadador()
		<< endl << toStringCorredor()
		<< endl << "Triatlon: " << endl
		<< "	Cantidad de IronMan participados: " << cantIronMan << endl
		<< "	Cantidad Triatlones ganados: " << cantTriaGanados << endl
		<< "----------------------------------------------------" << endl;

	return s.str();
}