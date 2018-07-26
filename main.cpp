#include <iostream>
#include <random>
#include <vector>
#include <chrono>
#include"PunterosFuciones.h"
std::vector<int> ListaDeNumeros = { 5,6,8,9,1,3,7,5,4,6,8,22 };

void Stop() {
	std::cin.ignore();
	std::cin.get();
}

bool RevisarSiEsPar (int valor) 
{

	if (valor % 2 == 0 && valor > 0) { return true; }
	else { return false; }

}

int Suma(int &Sumado) {
	srand(time(0));
	int indice = rand() % ListaDeNumeros.size();
	Sumado = Sumado + ListaDeNumeros[indice];

	return Sumado;
}

void Resta(int &Restado) {
	srand(time(0));
	int indice = rand() % ListaDeNumeros.size();
	Restado = Restado - ListaDeNumeros[indice];

}


int main() {
	bool(*Funcion)(int valor) = &RevisarSiEsPar;
	int ValorIgresado = 0;
	Ptr_Funciones misPunteros;

	misPunteros.FunI_intR = Suma;
	misPunteros.FunI_intR(ValorIgresado);

	Stop();

	return 0;
}