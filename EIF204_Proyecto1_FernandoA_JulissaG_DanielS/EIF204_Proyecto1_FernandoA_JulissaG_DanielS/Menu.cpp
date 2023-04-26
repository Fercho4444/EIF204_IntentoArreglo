#include "Menu.h"

int Menu::manejoDeErroresInt(string output) {
	bool exito = false;
	int num = 0;
	while (!exito) {
		cout << output;
		try {
			if (!(cin >> num)) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				throw ErroresExcep(100);
			}
			exito = true;
		}
		catch (ErroresExcep err) {
			cout << "ERROR " << err.what() << endl << endl;
		}
	}
	return num;
}

ErroresExcep Menu::requestErrorInfo(int cod) {
	return ErroresExcep(cod);
} // NO SABEMOS SI SE USARA AUN

Gimnasio* Menu::setupGimnasio() {
	int dia = 0, mes = 0, anio = 0;
	bool exito = false;
	Gimnasio* gym = NULL;
	ifstream entrada;
	cout << "==================BIENVENIDO A " << gym->getNombre() << "==================" << endl;
	cout << "POR FAVOR, DIGITE LOS SIGUIENTES DATOS DE LA FECHA ACTUAL" << endl << endl; // MEJORAR, QUE INGRESE DD/MM/AAAA
	dia = manejoDeErroresInt("Dia: ");
	mes = manejoDeErroresInt("Mes: ");
	anio = manejoDeErroresInt("Año: ");
	//cout << dia << endl << mes << endl << anio << endl;
	gym = new Gimnasio(dia, mes, anio);
	gym->cargarDatosGimnasio(entrada);
	system("cls");
	return gym;
}

void Menu::menuPrincipal(Gimnasio* gimnasio) {
	int opcion = 0;
	ofstream salida;

	while (opcion != 6) {
		cout << "=========================MENU PRINCIPAL=========================" << endl << endl;
		cout << "(1) - Administración General" << endl;
		cout << "(2) - Deportistas" << endl;
		cout << "(3) - Cursos" << endl;
		cout << "(4) - Grupos" << endl;
		cout << "(5) - Pagos" << endl;
		cout << "(6) - Guardar & Salir" << endl << endl;
		opcion = manejoDeErroresInt("Digite su opción: "); // HACER EXCEPCION
		system("cls");
		switch (opcion) {
		case 1:
			menuAdminGeneral(gimnasio);
			break;
		case 2:

			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			gimnasio->guardarDatosGimnasio(salida);
			cout << "::: LOS CAMBIOS HAN SIDO AUTO-GUARDADOS :::" << endl << endl; // CREAR UN METODO MENU PARA ESTO
			break;
		default:
			// PENDIENTE
			break;
		}
	}
}

// Sub-Menu Administracion General
void Menu::menuAdminGeneral(Gimnasio* gimnasio) {
	int opcion = 0;

	while (opcion != 4) {
		cout << "=======================1. ADMINISTRACIÓN GENERAL=======================" << endl << endl;
		cout << "(1) - Nombre del Gimnasio" << endl;
		cout << "(2) - Monto de Mensualidad" << endl;
		cout << "(3) - Mostrar datos del Gimnasio" << endl;
		cout << "(4) - Volver" << endl << endl;
		opcion = manejoDeErroresInt("Digite su opción: ");
		system("cls");
		switch (opcion) {
		case 1:
			cambiarNombreGimnasio(gimnasio);
			break;
		case 2:
			cambiarMontoGimnasio(gimnasio);
			break;
		case 3:
			mostrarDatosGimnasio(gimnasio);
			break;
		case 4:
			break;
		default:
			// PENDIENTE
			break;
		}
		if (opcion != 4) {
			system("pause");
		}
		system("cls");
	}
}

void Menu::cambiarNombreGimnasio(Gimnasio* gimnasio) {
	string nombre;
	cout << "Ingrese el nuevo nombre del gimnasio: "; cin >> nombre; cout << endl;
	gimnasio->setNombre(nombre);
}

void Menu::cambiarMontoGimnasio(Gimnasio* gimnasio) {
	double monto;
	cout << "Ingrese el nuevo monto de mensualidad: "; cin >> monto; cout << endl;
	gimnasio->setMontoActual(monto);
}

void Menu::mostrarDatosGimnasio(Gimnasio* gimnasio) {
	cout << gimnasio->toString() << endl << endl; // CONSIDERAR SOBRECARGA <<
}

// -------------------------------------------------------------------------------------------------REVISAR ANTES DE CONTINUAR
//// Sub-Menu Deportistas
//void Menu::menuDeportistas(Gimnasio* gimnasio){ // APLICAR EXCEPCIONES
//	int opcion = 0;
//
//	while (opcion != 5) {
//		cout << "=======================2. DEPORTISTAS=======================" << endl << endl;
//		cout << "(1) - Ingreso nuevo deportista" << endl;
//		cout << "(2) - Modificacion de un deportista" << endl;
//		cout << "(3) - Listado de deportistas" << endl;
//		cout << "(4) - Detalle de deportista especifico" << endl;
//		cout << "(5) - Volver" << endl << endl;
//		opcion = manejoDeErroresInt("Digite su opción: ");
//		system("cls");
//		switch (opcion) {
//		case 1:
//			crearDeportista(gimnasio);
//			break;
//		case 2:
//		
//			break;
//		case 3:
//
//			break;
//		case 4:
//			break;
//		case 5:
//			break;
//		default:
//			// PENDIENTE
//			break;
//		}
//		if (opcion != 5) {
//			system("pause");
//		}
//		system("cls");
//	}
//}
//
//
//void Menu::crearDeportista(Gimnasio* gimnasio){ // APLICAR EXCEPCIONES
//	string cedula, nombre, telefono;
//	char sexo;
//	int dia = 0, mes = 0, anio = 0;
//	int entrenamiento, ironMan, triatlonesG;
//	double estatura, peso, grasa, masa, temp;
//	IterLista<Deportista>* iteradorDep = NULL;
//	Deportista* nuevoDep = NULL;
//
//	cout << "=======================CREANDO DEPORTISTA====================== = " << endl << endl;
//	cout << "Datos Generales:" << endl;
//	cout << "\t ID: "; cin >> cedula;
//	cout << "\t Nombre completo: "; cin >> nombre;
//	cout << "\t Sexo (M/F): "; cin >> sexo;
//	cout << "Fecha de nacimiento: " << endl;
//	dia = manejoDeErroresInt("Dia: ");
//	mes = manejoDeErroresInt("Mes: ");
//	anio = manejoDeErroresInt("Año: ");
//	cout << "\t Telefono: "; cin >> telefono;
//	cout << "\t Horas de entrenamiento: "; cin >> entrenamiento;
//	cout << "\t Cantidad de Partidos IronMan: "; cin >> ironMan;
//	cout << "\t Triatlones ganados: "; cin >> triatlonesG;
//	cout << endl;
//
//	cout << "Datos Biometricos:" << endl;
//	cout << "\t Estatura: "; cin >> estatura;
//	cout << "\t Peso: "; cin >> peso;
//	cout << "\t Grasa corporal: "; cin >> grasa;
//	cout << "\t Masa muscular: "; cin >> masa;
//	cout << "\t Temperatura Promedio: "; cin >> temp;
//
//	iteradorDep = gimnasio->getListaDeportistas()->getIterador();
//	nuevoDep = new Triatlonista(nombre, cedula, telefono, entrenamiento, temp, masa, peso, grasa, sexo, estatura, ironMan, triatlonesG, dia, mes, anio);
//	
//	if (!(iteradorDep->elemDetectado(nuevoDep))) {
//		gimnasio->getListaDeportistas()->ingresarPrimero(nuevoDep); // APLICAR PRINCIPIO DE OCULT DE INFO EN LISTA.H Y PROBAR
//		cout << "Deportista Ingresado Exitosamente." << endl;
//	}
//	else {
//		delete nuevoDep;
//		cout << "!!! EL DEPORTISTA NO HA SIDO INGRESADO, YA HAY UN DEPORTISTA CON CEDULA !!!" << cedula << endl; // IMPRIMIR MAS ESPECIFICAMENTE, APLICAR EXCEPCION
//	}
//	delete iteradorDep;
//	
//	//if(gimnasio->getListaDeportistas()->ingresarPrimero(new Nodo<Deportista>(NULL, nuevo))){ // HACER QUE EL METODO RETORNA
//	//	cout<<"Nuevo deportista ingresado"<<endl;
//	//}else{
//	//	cout<<"Deportista no ingresado"<<endl;
//	//	delete nuevo;
//	//}
//}
//
//
//void modificarDeportista(Gimnasio* gimnasio){
//	string cedula, nombre, telefono;
//	int op = 0, dia,mes,anio,horas;
//	double estatura, peso, grasa, masa;
//
//	IterLista<Deportista>* iteradorDep = NULL;
//	iteradorDep = gimnasio->getListaDeportistas()->getIterador();
//
//	
//
//
//
//	cout<<"=================MODIFICAR DEPORTISTA==============="<<endl<<endl;
//	cout<<"\t Digite el ID del deportista a modificar: "; cin>>cedula;
//	
//	Triatlonista* actual = NULL; //Por mientras, revisar luego
//	while(op!=13){
//		cout<<"(1) - Nombre"<<endl; 
//		cout<<"(2) - Teléfono"<<endl; 
//		cout<<"(3) - Fecha de nacimiento"<<endl; 
//		cout<<"(4) - Sexo "<<endl; 
//		cout<<"(5) - Estatura"<<endl; 
//		cout<<"(6) - Peso"<<endl; 
//		cout<<"(7) - Porcentaje de grasa corporal "<<endl; 
//		cout<<"(8) - Porcentaje de masa muscular"<<endl; 
//		cout<<"(9) - Estado"<<endl; 
//		cout<<"(10) - Horas entrenamiento"<<endl; 
//		cout<<"(11) - Cantidad de partidos  IronMan"<<endl; 
//		cout<<"(12) - Cantidad de triatlones ganados"<<endl; 
//		cout<<"(13) - Volver"<<endl; 
//		cin>>op;
//
//		switch(op){
//			case 1: 
//				cout<<"Digite el nombre: "; cin>>nombre;
//				actual->setNombre(nombre);
//			break;
//			case 2: 
//				cout<<"Digite el telefono: "; cin>>telefono;
//				actual->setTelefono(telefono);
//			break;
//			case 3: 
//				cout<<"Digite el telefono: "; cin>>telefono;
//				actual->setTelefono(telefono);
//				break;
//			case 4: 
//				cout<<"Digite el dia"; cin>>dia;
//				cout<<"Digite el mes: "; cin>>mes;
//				cout<<"Digite el anio: "; cin>>anio;
//			break;
//			case 5: 
//				cout<<"Digite la estatura: "; cin>>estatura;
//				actual->setEstatura(estatura);
//				break;
//			case 6:
//				cout<<"Digite el peso: "; cin>>peso;
//				actual->setPeso(peso);
//				break;
//			case 7: 
//				cout<<"Digite el porcentaje de grasa corporal: "; cin>>grasa;
//				actual->setPorceGrasaCorporal(grasa);
//				break;
//			case 8: 
//				cout<<"Digite el porcentaje de masa muscular"; cin>>masa;
//				break;
//			case 9: 
//			
//				break;
//			case 10: 
//				cout<<"Digite la cantidad de horas de entrenamiento"; cin>>horas;
//				break;
//			case 11: 
//			
//				break;
//			case 12: 
//			
//				break;
//			case 13: break;
//			default: break;
//
//		}
//	}
//}
//	/*static ;
//	static void listarDeportistas(Gimnasio*);
//	static void detallarDeportista(Gimnasio*);*/
//
//
//// Sub-Menu Cursos
//void Menu::menuCursos(Gimnasio* gimnasio) {
//	int opcion = 0;
//
//	while (opcion != 4) {
//		cout << "=======================3. CURSOS=======================" << endl << endl;
//		cout << "(1) - Ingresar Curso" << endl;
//		cout << "(2) - Reporte de Curso" << endl;
//		cout << "(3) - Modificación de Curso" << endl;
//		cout << "(4) - Volver" << endl << endl;
//		opcion = manejoDeErroresInt("Digite su opción: ");
//		system("cls");
//		switch (opcion) {
//		case 1:
//			ingresarCurso(gimnasio);
//			break;
//		case 2:
//
//			break;
//		case 3:
//
//			break;
//		case 4:
//			break;
//		case 5:
//			break;
//		default:
//			// PENDIENTE
//			break;
//		}
//		if (opcion != 4) {
//			system("pause");
//		}
//		system("cls");
//	}
//}
//
//void Menu::ingresarCurso(Gimnasio* gimnasio) {
//	string codigo, nombre, nivel, descripcion;
//	int cantGrupos;
//	cout << "=======================CREANDO CURSO=======================" << endl << endl;
//	cout << "Digite los siguientes datos: " << endl;
//	cout << "\t Código: "; cin >> codigo;
//	cout << "\t Nombre del Curso: "; cin >> nombre;
//	cout << "\t Nivel: "; cin >> nivel;
//	cantGrupos = manejoDeErroresInt("\t Cantidad de Grupos: ");
//	cout << "\t Descripción: "; cin >> descripcion;
//	gimnasio->getListaCursos()->ingresarPrimero(new Curso(codigo, nombre, nivel, cantGrupos, descripcion));
//}