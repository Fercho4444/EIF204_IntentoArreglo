#pragma once
#include "Pago.h"
#include "Lista.h"

using namespace std;

class Expediente {
private:
	string nombre;
	string estado;
	string cedula;
	string telefono;
	Lista<Pago>* historialPago;

public:
	Expediente(string, string, string);
	virtual ~Expediente();
	string getNombre();
	string getEstado();
	string getCedula();
	string getTelefono();
    Lista<Pago>* getHistorialPago();

	void setNombre(string);
	void setEstado(string);
	void setCedula(string);
	void setTelefono(string);
    void setHistorialPago(Lista<Pago>*);

	string estadoReal(Fecha*);
};