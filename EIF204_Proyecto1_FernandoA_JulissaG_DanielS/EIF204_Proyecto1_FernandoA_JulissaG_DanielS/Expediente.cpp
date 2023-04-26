#include "Expediente.h"

Expediente::Expediente(string nom, string ced, string tel) {
	nombre = nom;
	estado = "ACTIVO";
	cedula = ced;
	telefono = tel;
	historialPago = new Lista<Pago>();
}

Expediente:: ~Expediente() {
	if (historialPago != NULL) {
		delete historialPago;
	}
}

string Expediente::getNombre() { return nombre; }

string Expediente::getEstado() {
	return estado;
}

string Expediente::getCedula() { return cedula; }
string Expediente::getTelefono() { return telefono; }
Lista<Pago>* Expediente::getHistorialPago() { return historialPago; }

void Expediente::setNombre(string nom) { nombre = nom; }
void Expediente::setEstado(string esta) { estado = esta; }
void Expediente::setCedula(string ced) { cedula = ced; }
void Expediente::setTelefono(string tel) { telefono = tel; }
void Expediente::setHistorialPago(Lista<Pago>* ptr) { historialPago = ptr; }

string Expediente::estadoReal(Fecha* fechaActual) {
	if (*fechaActual - *(historialPago->getPPIO()->getPuntero()->getFechaPago()) > 30) {
		if (estado == "ACTIVO") {
			return "MOROSIDAD";
		}
	}
	return estado;
}