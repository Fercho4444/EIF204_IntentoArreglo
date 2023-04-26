#pragma once
#include "Deportista.h"
class Ciclista:public Deportista{
protected:
	int horas;
	double temPromedio; // TEMPERATURA PROMEDIO
public:
	Ciclista(string, string, string, int, double, int, int, int);
	virtual ~Ciclista();

	virtual int getHoras();
	virtual double getTemPromedio();

	virtual void setHoras(int);
	virtual void setTemPromedio(double);

	virtual string toString();
};

