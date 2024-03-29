/*
Universidad De La Salle Bajío
Ingeniería de Software y Sistemas Computacionales
Metodología y Programación de Sistemas
Autor: Angel Fabricio Zacarías Guzmán
Grupo: 111   Matrícula: 67664
Programa: 34 WHILE
Descripción: Realice un algoritmo para generar N
elementos de la sucesión de Fibonacci (0, 1, 1, 2, 3, 5, 8, 13,…).
fecha 23/09/2018
*/

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int a = 1, b = 0, c, i = 0, numeros;
	cout << "Cuantos numeros desea generar: "; cin >> numeros;
	cout << "0" << endl;
	while (i < numeros) {
		c = a + b;
		cout << c << endl;
		a = b;
		b = c;
		i++;
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
