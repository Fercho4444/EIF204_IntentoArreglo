#pragma once
#include "Ciclista.h"
#include "Nadador.h"
#include "Corredor.h"

class Triatlonista: public Ciclista {
private:
	Nadador* nadador;
	Corredor* corredor;
	int cantIronMan;
	int cantTriaGanados;

public:
	Triatlonista(string, string, string, int, double, double, double, double, char, double, int, int, int, int, int);
	virtual ~Triatlonista();

	Nadador* getNadador();
	Corredor* getCorredor();
	int getCantIronMan();
	int getCantTriaGanados();


	void setNadador(Nadador*);
	void setCorredor(Corredor*);
	void setCantIronMan(int);
	void setCantTriaGanados(int);


	//NADADOR
	double getMasaMuscular();
	double getPeso();
	double getPorceGrasaCorporal();

	void setMasaMuscular(double);
	void setPeso(double);
	void setPorceGrasaCorporal(double);


	//CORREDOR
	char getSexo();
	double getEstatura();

	void setSexo(char);
	void setEstatura(double);


	// TOSTRINGS
	string toString();
	string toStringNadador();
	string toStringCorredor();
};

