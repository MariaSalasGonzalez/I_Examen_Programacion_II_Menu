#pragma once
#include "Librerias.h"
using namespace std;
template <class T>

class Vectores {
private:
	vector<T> elementos;
	int N;
public:
	Vectores(int N);
	void setN(int);
	int getN();
	void incluir(T elemento);
	int mostrar(int pos);
	long tamanno();
	void eliminar();
	bool vacio();
	void ordenar();
	string mostrarTodo();
	~Vectores();
};

