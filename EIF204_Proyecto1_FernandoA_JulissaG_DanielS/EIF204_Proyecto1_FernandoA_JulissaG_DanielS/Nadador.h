#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Nadador{
private:
	double masaMuscular;
	double peso;
	double porceGrasaCorporal;

public:
	Nadador(double, double, double);
	virtual~Nadador();
	double getMasaMuscular();
	double getPeso();
	double getPorceGrasaCorporal();

	void setMasaMuscular(double);
	void setPeso(double);
	void setPorceGrasaCorporal(double);

	string toString();
};

