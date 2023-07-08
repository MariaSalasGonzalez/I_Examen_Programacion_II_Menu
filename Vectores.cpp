#include "Vectores.h"

template <class T>
Vectores<T>::Vectores(int N) : N(N) {}

template <class T>
void Vectores<T>::setN(int N) {
	this->N = N;
}

template <class T>
int Vectores<T>::getN() {
	return N;
}

template <class T>
string Vectores<T>::mostrarTodo() {
	stringstream ss;
	ss << "-----VALORES DEL VECTOR-----" << endl;
	for (int i = 0; i < tamanno(); i++) {
		if (i == (tamanno() - 1)) {
			ss << mostrar(i) << endl;
		}
		else {
			ss << mostrar(i) << " - ";
		}
	}
	ss << "-----FIN DEL VECTOR-----" << endl;
	return ss.str();
}

template <class T>
void Vectores<T>::incluir(T elemento) {
	if (tamanno() < getN()){
	elementos.push_back(elemento);
    }else{
		throw "Maximo de elementos superado";
	}
}

template <class T>
int Vectores<T>::mostrar(int pos){
	return elementos[pos];
}

template <class T>
long Vectores<T>::tamanno(){
	return elementos.size();
}

template <class T>
void Vectores<T>::eliminar() {
	if (tamanno() > 0) {
		elementos.pop_back();
	}else {
		throw "no hay elementos que se deban eliminar. ";
	}
}

template <class T>
bool Vectores<T>::vacio(){
	return elementos.empty();
}

//CUARTO ERROR: (el metodo ordenar estaba en forma descendente y lo ocupamos descendente)
template <class T>void Vectores<T>::ordenar(){	int unElemento;	for (int i = 0; i < tamanno(); i++){		unElemento = elementos[i];		for (int j = i; j < 0 && unElemento < elementos[j - 1]; j--){			elementos[j] = elementos[j - 1];			elementos[j - 1] = unElemento;		}	}}

//QUINTO ERROR: (se debe de eliminar: vector<T> elementos, para liberar memoria)
template <class T>
Vectores<T>::~Vectores() {
}

