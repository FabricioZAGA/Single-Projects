// ZGAF_48.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*		while (r != 'y' || r != 'n') {
cout << "Desea hacer otro calculo (y/n)";
cin >> r;
		}
*/

#include "pch.h"
#include <iostream>
using namespace std;
float clave1();
float clave2();
float clave3();
int main()
{
	char r;
	do 
	{
		float total = 0;
		float cla1 = clave1(), cla2 = clave2(), cla3 = clave3();
		cout << "El total a pagar vehiculos clave 1 es: " << cla1 << endl;
		cout << "El total a pagar vehiculos clave 2 es: " << cla2 << endl;
		cout << "El total a pagar vehiculos clave 3 es: " << cla3 << endl;
		total = cla1 + cla2 + cla3;
		cout << "El total a pagar por todos los vehiculos es: \n" << total << endl;
		do {
			cout << "Desea hacer otro calculo (y/n) ";
			cin >> r;
		} while (r != 'y' && r != 'n');
	} while (r == 'y');
	system("pause");
	return 0;
}

float clave1()
{
	int cantidad = 0;
	float precio = 0, total = 0;
	cout << "Introduzca la cantidad de vehiculos con clave 1 "; 
	cin >> cantidad;
	for (int i = 1; i <= cantidad; i++) {
		cout << "Precio vehiculo " << i << ": "; 
		cin >> precio;
		precio *= 1.10;
		total += precio;
	}
	return total;
}

float clave2()
{
	int cantidad = 0;
	float precio = 0, total = 0;
	cout << "Introduzca la cantidad de vehiculos con clave 2 ";
	cin >> cantidad;
	for (int i = 1; i <= cantidad; i++) {
		cout << "Precio vehiculo " << i << ": ";
		cin >> precio;
		precio *= 1.07;
		total += precio;
	}
	return total;
}

float clave3()
{
	int cantidad = 0;
	float precio = 0, total = 0;
	cout << "Introduzca la cantidad de vehiculos con clave 2 ";
	cin >> cantidad;
	for (int i = 1; i <= cantidad; i++) {
		cout << "Precio vehiculo " << i << ": ";
		cin >> precio;
		precio *= 1.05;
		total += precio;
	}
	return total;
}
