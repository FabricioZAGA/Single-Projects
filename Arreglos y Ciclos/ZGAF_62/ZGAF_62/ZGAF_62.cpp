/*
Universidad De La Salle Bajío
Ingeniería de Software y Sistemas Computacionales
Metodología y Programación de Sistemas
Autor: Angel Fabricio Zacarías Guzmán
Grupo: 111   Matrícula: 67664
Programa: 62 CICLOS ARREGLOS
Descripción: 3.	Realice un algoritmo y programa en C++ para obtener 
una matriz como el resultado de la suma de dos matrices de orden M x N.
*/


#include "pch.h"
#include <iostream>
using namespace std;
void sumaMatriz();
int main()
{
	sumaMatriz();
}
void sumaMatriz() {
	int matriz1[50][50], matriz2[50][50], matriz3[50][50], filas, columnas;
	cout << "Digite el numero de filas de las matrices: "; cin >> filas;
	cout << "Digite el numero de columnas de las matrices: "; cin >> columnas;
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << "\nDigite un numero [" << i + 1 << "] [" << j + 1 << "] de la primera matriz\n";
			cin >> matriz1[i][j];
		}
	}
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << "\nDigite un numero [" << i + 1 << "] [" << j + 1 << "] de la segunda matriz\n";
			cin >> matriz2[i][j];
		}
	}
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
		}
	}
	for (int i = 0; i < filas; i++) {
		cout << "| ";
		for (int j = 0; j < columnas; j++) {
			cout << matriz3[i][j] << " ";
		}
		cout << "|" << endl;
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
