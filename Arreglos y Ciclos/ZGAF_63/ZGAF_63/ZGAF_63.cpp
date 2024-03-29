/*
Universidad De La Salle Bajío
Ingeniería de Software y Sistemas Computacionales
Metodología y Programación de Sistemas
Autor: Angel Fabricio Zacarías Guzmán
Grupo: 111   Matrícula: 67664
Programa: 63 ARREGLOS CICLOS
Descripción: 4.	Realiza un diagrama de flujo  del algoritmo para obtener 
el producto de dos matrices de orden M x N y P x Q y prográmalo en C++.
fecha 25/10/2018
*/

#include "pch.h"
#include <iostream>
using namespace std;
void multiplicarMatriz();
int main()
{
	multiplicarMatriz();
	system("pause");
	return 0;
}
void multiplicarMatriz() {
	int matriz1[50][50], matriz2[50][50], matriz3[50][50] = {0}, filas1, columnas1, filas2, columnas2;
	cout << "Digite el numero de filas de la primera matriz: "; cin >> filas1;
	cout << "Digite el numero de columnas de la primera matriz: "; cin >> columnas1;
	cout << "\nDigite el numero de filas de la segunda matriz: "; cin >> filas2;
	cout << "Digite el numero de columnas de la segunda matriz: "; cin >> columnas2;
	if (columnas1 == filas2) {
		cout << "Rellene la primera matriz: \n";
		for (int i = 0; i < filas1; i++) {
			for (int j = 0; j < columnas1; j++) {
				cout << "Ingrese el valor [" << i + 1 << "][" << j + 1 << "]\n";
				cin >> matriz1[i][j];
			}
		}
		cout << "Rellene la segunda matriz: \n";
		for (int i = 0; i < filas2; i++) {
			for (int j = 0; j < columnas2; j++) {
				cout << "Ingrese el valor [" << i + 1 << "][" << j + 1 << "]\n";
				cin >> matriz2[i][j];
			}
		}
		for (int i = 0; i < filas1; i++) {
			for (int j = 0; j < columnas2; j++) {
				for (int k = 0; k < columnas1; k++) {
					matriz3[i][j] = matriz3[i][j] + matriz1[i][k] * matriz2[k][j];
				}
			}
		}
		cout << "\El resultado es: \n";
		for (int i = 0; i < filas1; i++) {
			cout << "|\t ";
			for (int j = 0; j < columnas2; j++) {
				cout << matriz3[i][j] << "\t";
			}
			cout << " |" << endl;
		}
	}
	else {
		cout << "\nEstas matrices no se pueden multiplicar :(\n";
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
