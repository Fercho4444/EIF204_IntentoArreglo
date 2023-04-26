#include "Fecha.h"

Fecha::Fecha(int d, int m, int a) : dia(d), mes(m), anio(a) {}

Fecha::~Fecha() {}

int Fecha::getDia() { return dia; }
int Fecha::getMes() { return mes; }
int Fecha::getAnio() { return anio; }

string Fecha::toString() {
	stringstream s;
	s << dia << "/" << mes << "/" << anio;
	return s.str();
}

int Fecha::operator-(Fecha& fechaRec) { // OPTIMIZAR ANTES DE ENTREGAR
	int recAnioEnDias = 0;
	int totalDias = 0;
	int mesAux = fechaRec.mes;
	int anioAux = fechaRec.anio;
	int diasFebrero = 28;

	if (this->anio == fechaRec.anio) {
		if (this->mes == fechaRec.mes) {
			totalDias = this->dia - fechaRec.dia;
		}
		else {
			if (anioAux % 100 == 0) { // METODO AÑO BISIESTO
				if (anioAux % 400 == 0) {
					diasFebrero = 29;
				}
			}
			else {
				if (anioAux % 4 == 0) {
					diasFebrero = 29;
				}
			}
			while (mesAux < this->mes) {
				if (mesAux < 8) {
					if (mesAux == 2) { // FEBRERO 28 DIAS
						totalDias += diasFebrero;
					}
					else {
						if (mesAux % 2 != 0) {
							totalDias += 31;
						}
						else {
							totalDias += 30;
						}
					}
				}
				else {
					if (mesAux % 2 != 0) {
						totalDias += 30;
					}
					else {
						totalDias += 31;
					}
				}
				mesAux++;
			}
			totalDias += this->dia - fechaRec.dia;
		}
	}
	else {
		while (anioAux < this->anio) {
			if (anioAux % 100 == 0) { // METODO AÑO BISIESTO
				if (anioAux % 400 == 0) {
					diasFebrero = 29;
				}
			}
			else {
				if (anioAux % 4 == 0) {
					diasFebrero = 29;
				}
			}
			while (mesAux <= 12) {
				if (mesAux < 8) {
					if (mesAux == 2) { // FEBRERO 28 DIAS
						totalDias += diasFebrero;
					}
					else {
						if (mesAux % 2 != 0) {
							totalDias += 31;
						}
						else {
							totalDias += 30;
						}
					}
				}
				else {
					if (mesAux % 2 != 0) {
						totalDias += 30;
					}
					else {
						totalDias += 31;
					}
				}
				mesAux++;
			}
			if (diasFebrero != 28) {
				diasFebrero = 28;
			}
			mesAux = 1;
			anioAux++;
		}
		if (anioAux % 100 == 0) { // METODO AÑO BISIESTO
			if (anioAux % 400 == 0) {
				diasFebrero = 29;
			}
		}
		else {
			if (anioAux % 4 == 0) {
				diasFebrero = 29;
			}
		}
		while (mesAux < this->mes) {
			if (mesAux < 8) {
				if (mesAux == 2) { // FEBRERO 28 DIAS
					totalDias += diasFebrero;
				}
				else {
					if (mesAux % 2 != 0) {
						totalDias += 31;
					}
					else {
						totalDias += 30;
					}
				}
			}
			else {
				if (mesAux % 2 != 0) {
					totalDias += 30;
				}
				else {
					totalDias += 31;
				}
			}
			mesAux++;
		}
		totalDias += this->dia - fechaRec.dia;
	}
	return totalDias;
}
