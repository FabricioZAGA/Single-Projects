/*
Universidad De La Salle Bajío
Ingeniería de Software y Sistemas Computacionales
Metodología y Programación de Sistemas
Autor: Angel Fabricio Zacarías Guzmán
Grupo: 111   Matrícula: 67664
Programa: 64
Descripción: 
fecha 08/11/2018
*/
#include "pch.h"
#include <iostream>
using namespace std;
struct caja {
	int billetes[6];
	int monedas[5];
	long cMonedas[5];
	long cBilletes[6];
}caja1;
void funcionBilletes();
void funcionMonedas();
void mostrarTabla();
int main()
{

	funcionBilletes();
	funcionMonedas();
	mostrarTabla();
}
void funcionBilletes() {
	int valor;
	for (int i = 0; i < 6; i++) {
		switch (i)
		{
		case 0: valor = 20;
			break;
		case 1: valor = 50;
			break;
		case 2: valor = 100;
			break;
		case 3: valor = 200;
			break;
		case 4: valor = 500;
			break;
		case 5: valor = 1000;
			break;
		}
		cout << "Ingrese la cantidad de billetes de " << valor << " pesos ";
		cin >> caja1.billetes[i];
		caja1.cBilletes[i] = caja1.billetes[i] * valor;
		cout << endl;
	}
}
void funcionMonedas() {
	int valor;
	for (int i = 0; i < 5; i++) {
		switch (i)
		{
		case 0: valor = 1;
			break;
		case 1: valor = 2;
			break;
		case 2: valor = 5;
			break;
		case 3: valor = 10;
			break;
		case 4: valor = 20;
			break;
		}
		cout << "Ingrese la cantidad de monedas de " << valor << " pesos ";
		cin >> caja1.monedas[i];
		caja1.cMonedas[i] = caja1.monedas[i] * valor;
		cout << endl;
	}
}
void mostrarTabla(){
	int valor;
	cout << "\n \tDenominacion \tCantidad \tSubtotal";
	for (int i = 0; i < 5; i++) {
		switch (i)
		{
		case 0: valor = 20;
			break;
		case 1: valor = 50;
			break;
		case 2: valor = 100;
			break;
		case 3: valor = 200;
			break;
		case 4: valor = 500;
			break;
		case 5: valor = 1000;
			break;
		}
		cout << "\n \t\t" << valor << "\t\t" << caja1.billetes[i] << "\t\t$" << caja1.cBilletes[i];
	}
	for (int i = 0; i < 5; i++) {
		switch (i)
		{
		case 0: valor = 1;
			break;
		case 1: valor = 2;
			break;
		case 2: valor = 5;
			break;
		case 3: valor = 10;
			break;
		case 4: valor = 20;
			break;
		}
		cout << "\n \t\t" << valor << "\t\t" << caja1.monedas[i] << "\t\t$" << caja1.cMonedas[i];
	}
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
