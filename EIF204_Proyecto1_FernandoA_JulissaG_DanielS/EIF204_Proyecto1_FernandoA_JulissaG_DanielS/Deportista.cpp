#include"Deportista.h"

Deportista::Deportista(string nom, string ced, string tel, int diaNac, int mesNac, int anioNac){ // REVISAR DEPORTISTA <-> EXPEDIENTE Y AJUSTAR CONSTRUCTOR
	cedula = ced;
	nombre = nom;
	telefono = tel;
	fechaNac = new Fecha(diaNac, mesNac, anioNac);
	expediente = new Expediente(nom, ced, tel);
}

Deportista:: ~Deportista() { if (fechaNac != NULL) delete fechaNac; }
string Deportista::getCedula() { return cedula; }
string Deportista::getNombre() { return nombre; }
string Deportista::getTelefono() { return telefono; }
Fecha* Deportista::getFechaNac() { return fechaNac; }
Expediente* Deportista::getExpediente() { return expediente; }

void Deportista::setCedula(string ced) { cedula = ced; }
void Deportista::setNombre(string nom) { nombre = nom; }
void Deportista::setTelefono(string tel) { telefono = tel; }
void Deportista::setFechaNac(Fecha* fec) { fechaNac = fec; }

// SOBRECARGAS
bool Deportista::operator==(Deportista& dep) {
	if (this->cedula == dep.cedula) {
		return true;
	}
	return false;
}
