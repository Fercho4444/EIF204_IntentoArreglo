#pragma once
#include "Triatlonista.h"

class Grupo{
private:
	int cupo;
	int numGrupo;
	string idInstructor;
	string nombreInstructor;
	Fecha* inicio;
	string horaInicio;
	string horaFin;
	char dia;
	int duracion;
	Lista<Deportista>* listaMatric;

public:
	Grupo(int cu, int num, string id, string nom, Fecha* fec, string ini, string fin, char d, int dura);
	virtual ~Grupo();
	int getCupo();
	int getNumGrupo();
	string getIdInstructor();
	string getNombreInstructor();
	Fecha* getInicio();
	string getHoraInicio();
	string getHoraFin();
	char getDia();
	int getDuracion();
	Lista<Deportista>* getListaMatric();

	void setCupo(int);
	void setIdInstructor(string);
	void setNombreInstructor(string);
	void setInicio(Fecha*);
	void setHoraInicio(string);
	void setHoraFin(string);
	void setDia(char);
	void setDuracion(int);
	// void setListaMatric(Lista<Deportista>*);

	string toString();
};

