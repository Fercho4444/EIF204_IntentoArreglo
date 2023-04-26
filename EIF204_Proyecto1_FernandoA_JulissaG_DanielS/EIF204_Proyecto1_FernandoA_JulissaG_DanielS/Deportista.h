#pragma once
#include "Fecha.h"
#include "Expediente.h"

class Deportista{
protected:
	string cedula;
	string nombre;
	string telefono;
	Fecha* fechaNac;
	Expediente* expediente;

public:
	Deportista(string, string, string, int, int, int);
	virtual ~Deportista();

	virtual string getCedula();
	virtual string getNombre();
	virtual string getTelefono();
	virtual Fecha* getFechaNac();
	virtual Expediente* getExpediente();

	virtual void setCedula(string);
	virtual void setNombre(string);
	virtual void setTelefono(string) ;
	virtual void setFechaNac(Fecha*);

	virtual string toString() = 0;

	// SOBRECARGAS
	virtual bool operator == (Deportista&);
};