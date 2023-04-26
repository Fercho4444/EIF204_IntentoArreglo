#include "Gimnasio.h"

Gimnasio::Gimnasio(int dia, int mes, int anio, string nomb, double monto)
	: listaDeportistas(new Lista<Deportista>()), listaCursos(new Lista<Curso>()), fechaActual(new Fecha(dia, mes, anio)), nombre(nomb), montoActual(monto) {
	cout << "CONSTRUCTOR DE GIMNASIO LLAMADO" << endl;
}

Gimnasio::~Gimnasio() {
	// NUNCA VAN A SER NULL
	delete listaDeportistas;
	delete listaCursos;
}

Lista<Deportista>* Gimnasio::getListaDeportistas() { return listaDeportistas; }
Lista<Curso>* Gimnasio::getListaCursos() { return listaCursos; }
Fecha* Gimnasio::getFechaActual() { return fechaActual; }
string Gimnasio::getNombre() { return nombre; }
double Gimnasio::getMontoActual() { return montoActual; }

void Gimnasio::setListaDeportistas(Lista<Deportista>* lista) { listaDeportistas = lista; }
void Gimnasio::setListaCursos(Lista<Curso>* lista) { listaCursos = lista; }
void Gimnasio::setFechaActual(Fecha* fechaPtr) { 
	if (fechaActual != NULL) {
		delete fechaActual;
	}
	fechaActual = fechaPtr;
}
void Gimnasio::setNombre(string nomb) { nombre = nomb; }
void Gimnasio::setMontoActual(double monto) { montoActual = monto; }

string Gimnasio::toString() {
	stringstream s;
	s << "===================DATOS DEL GIMNASIO===================" << endl << endl;
	s << "Nombre: " << nombre << endl
		<< "Monto de Mensualidad: " << montoActual << " colones.";
	return s.str();
}

// CUSTOM
void Gimnasio::cargarDatosGimnasio(ifstream& entrada) { // EVALUAR
	string nombre, monto;
	string direccDatos = "../DatosGimnasio.txt";

	entrada.open(direccDatos.c_str());
	while (entrada.good()) {
		getline(entrada, nombre, '\t');
		getline(entrada, monto, '\n');
	}
	if (nombre != "") {
		this->nombre = nombre;
	}
	if (monto != "") {
		this->montoActual = convertirDouble(monto);
	}
	entrada.close();
}

void Gimnasio::guardarDatosGimnasio(ofstream& salida) {
	string direccDatos = "../DatosGimnasio.txt";
	salida.open(direccDatos.c_str());
	salida << this->nombre << "\t" << this->montoActual;
	salida.close();
}