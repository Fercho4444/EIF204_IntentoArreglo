#pragma once
#include <iostream>
#include <sstream>
//#include <ctime>
#include <locale.h>
#include <limits>
#include "Gimnasio.h"
#include "ErroresExcep.h"

using namespace std;

class Menu {
public:
	static ErroresExcep requestErrorInfo(int); // SOLICITA Y RETORNA UN OBJ AUTOMATICO CON INFORMACION DEL ERROR // NO SABEMOS SI SE USARA AUN
	static int manejoDeErroresInt(string);

	static Gimnasio* setupGimnasio();
	static void menuPrincipal(Gimnasio*);

	// Sub-Menu Administracion General
	static void menuAdminGeneral(Gimnasio*);
	static void cambiarNombreGimnasio(Gimnasio*);
	static void cambiarMontoGimnasio(Gimnasio*);
	static void mostrarDatosGimnasio(Gimnasio*);

	// Sub-Menu Deportistas
	static void menuDeportistas(Gimnasio*);
	static void crearDeportista(Gimnasio*);
	static void modificarDeportista(Gimnasio*);
	static void listarDeportistas(Gimnasio*);
	static void detallarDeportista(Gimnasio*);

	// Sub-Menu Cursos
	static void menuCursos(Gimnasio*);
	static void ingresarCurso(Gimnasio*);
	static void reporteDeCurso(Gimnasio*);
	static void modificarCurso(Gimnasio*);

	// Sub-Menu Grupos
	static void menuGrupos(Gimnasio*);
	static void ingresarGrupo(Gimnasio*);
	static void modificarGrupo(Gimnasio*);
	static void matrDeportEnGrupo(Gimnasio*); // Matricular Deportista en un Grupo
	static void reporteDeGrupo(Gimnasio*);
	static void repDeportMatricEnGrupo(Gimnasio*); // Reporte/Lista de Deportistas Matriculados en un Grupo
	static void cancelarMatricEnGrupo(Gimnasio*);

	// Sub-Menu Pagos
	static void menuPagos(Gimnasio*);
	static void registroPag(Gimnasio*); // Registro de un nuevo pago
	static void reportePagosDeport(Gimnasio*);
};