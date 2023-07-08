#include "Menu.h"

Menu::Menu():vectorInt(new Vectores<int>(10)) {
}

void Menu::menuPrincipal() {
	int  opcion = 0;
	while (cin.fail()) {
		cin.clear();
		cout << "Seleccione la operacion que desea realizar" << endl;
		cout << " 1 :  Incluir datos en el Vector " << endl;
		cout << " 2 :  Mostrar datos del vector  " << endl;
		cout << " 3 :  Ordenar el vector (ascendente)" << endl;
		cout << " 4 :  Eliminar el ultimo valor del vector" << endl;
		cout << " 5 :  Salir  " << endl << endl;
		cout << "SELECCIONE UNA OPCION:  ";
		cin >> opcion;
	}
	//TERCER ERROR: (opcion != 5), no (opcion != 7)
	while (opcion != 5) {
		cout << "Seleccione la operacion que desea realizar" << endl;
		cout << " 1 :  Incluir datos en el Vector " << endl;
		cout << " 2 :  Mostrar datos del vector  " << endl;
		cout << " 3 :  Ordenar el vector (ascendente)" << endl;
		cout << " 4 :  Eliminar el ultimo valor del vector" << endl;
		cout << " 5 :  Salir  " << endl << endl;
		cout << "SELECCIONE UNA OPCION:  ";
		cin >> opcion;

		switch (opcion) {
			//SEGUNDO ERROR: opcion1(), no opcion2();
		case 1:
			opcion1();
			break;
		case 2:
			opcion2();
			break;
		case 3:
			opcion3();
			break;
		case 4:
			opcion4();
			break;
		case 5:
			cout << "Sistema Cerrado." << endl;
			break;
		default:
			cout << "LA OPCION SELECCIONADA NO EXISTE";
			break;
		}
	}
		assert(opcion <= 5);
		//COMENTARIO_ASSERT: en este caso el assert saca del sistema si la opcion es menor o igual a 5, esto
		//quiere decir que se terminará el programa mostrando el tipo de error.
	exit(0);
}

//THROW TRY CACTH: esta excepcion se da si ya no quedaran mas espacios en el vector 
void Menu::opcion1() {
	try {
		int valor;
		cout << "Cual es el valor a ingresar?: " << endl;
		while (cin.fail()) {
			cin.clear();
			cout << "Digite el valor a ingresar: " << endl;
			cin >> valor;
		}
		vectorInt->incluir(valor);
		cout << "Valor Incluido!!" << endl;
		cin.get();
		cin.get();
	}
	catch (string prueba) {
		cout << prueba << endl;
	}
}

    //PRIMER ERROR: (el punto y coma en opcion2()->;)
void Menu::opcion2() { 
	if (vectorInt->vacio()) {
		cout << "Nada que mostrar!" << endl;
	}else {
		cout << vectorInt->mostrarTodo() << endl;
	}
	cin.get();
	cin.get();
}

void Menu::opcion3() {
	vectorInt->ordenar();
	cout << "Vector Ordenado! " << endl;
	cin.get();
	cin.get();
}

void Menu::opcion4() {
	try {
		vectorInt->eliminar();
		cout << "Ultimo valor eliminado " << endl;
		cin.get();
		cin.get();
	}
	catch (string aux) {
			cout << aux << endl;
		}
}

Menu::~Menu() {
	delete vectorInt;
}
