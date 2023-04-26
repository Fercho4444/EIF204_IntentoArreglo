#include "Menu.h"
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Spanish");
	Gimnasio* gimnasio = Menu::setupGimnasio();
	Menu::menuPrincipal(gimnasio);

	// SECCION DE PRUEBAS QUEMADAS
	/*Fecha* fechaAct = new Fecha(20, 4, 2023);
	Fecha* fechaPago = new Fecha(24, 11, 1995);*/

	return 0;
}