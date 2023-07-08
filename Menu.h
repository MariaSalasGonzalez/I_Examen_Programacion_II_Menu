#pragma once
#include "Librerias.h"
#include <assert.h>
#include "Vectores.cpp"
using namespace std;

class Menu {
private:
	Vectores<int>* vectorInt;
public:
	Menu();
	void menuPrincipal();
	void opcion1();
	void opcion2();
	void opcion3();
	void opcion4();
	~Menu();
};



