#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Fecha {
private:
	int dia;
	int mes;
	int anio;

public:
	Fecha(int, int, int);
	virtual ~Fecha();

	int getDia();
	int getMes();
	int getAnio();

	string toString();

	// SOBRECARGAS DE OPERADORES
	int operator - (Fecha&);
};