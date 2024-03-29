// ZGAF_51.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
using namespace std;
float funcionPromedio(int num[], int can);
void funcionMayorMenor(int num[], int can);
void funcionMostrarArreglo(int num[], int can);
int main()
{
	int numeros[100], cantidad = 0, suma = 0, mayor = 0, menor = 0;
	float promedio = 0;
	cout << "Cuantos numeros desea utilizar ";
	cin >> cantidad; cout << endl;
	promedio = funcionPromedio(numeros, cantidad);
	cout << "\nPromedio: " << promedio << endl;
	funcionMayorMenor(numeros, cantidad);
	funcionMostrarArreglo(numeros, cantidad);
	cout << endl;
	system("pause");
	return 0;
}
float funcionPromedio(int num[], int can) {
	float promedio;
	int suma = 0;
	for (int i = 0; i < can; i++) {
		cout << "Introduzca el valor " << (i + 1) << endl;
		cin >> num[i];
	}
	for (int i = 0; i < can; i++) {
		suma += num[i];
	}
	promedio = suma / can;
	return promedio;
}

void funcionMayorMenor(int num[], int can) {
	int mayor, menor;
	mayor = num[0];
	menor = num[0];
	for (int i = 0; i < can; i++) {
		if (num[i] > mayor) {
			mayor = num[i];
		}
		if (num[i] < mayor) {
			menor = num[i];
		}
	}
	cout << "\nMayor: " << mayor << endl;
	cout << "\nMenor: " << menor << endl;
}
void funcionMostrarArreglo(int num[], int can) {
	cout << "\nValores del arreglo: ";
	for (int i = 0; i < can; i++) {
		cout << "\n" << num[i];
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
