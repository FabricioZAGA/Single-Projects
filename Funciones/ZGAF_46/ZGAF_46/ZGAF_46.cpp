/*
Universidad De La Salle Bajío
Ingeniería de Software y Sistemas Computacionales
Metodología y Programación de Sistemas
Autor: Angel Fabricio Zacarías Guzmán
Grupo: 111   Matrícula: 67664
Programa: 46 FUNCIONES
Descripción: Una persona se encuentra en el kilómetro 70 de la carretera Aguascalientes-Zacatecas,
otra se encuentra en el km 150 de la misma carretera, la primera viaja en dirección a Zacatecas,
mientras que la segunda se dirige a Aguasca-lientes, a la misma velocidad.
Realice un algoritmo para determinar en qué kilometro de esa carretera se encontrarán
fecha 02/10/2018
*/

#include "pch.h"
#include <iostream>
using namespace std;
void kilometros(int a, int b);
int main()
{
	int auto1, auto2;
	cout << "Primer auto aguascalientes-salamanca: "; cin >> auto1;
	cout << "Segundo auto salamanca-aguascalientes: "; cin >> auto2;
	if (auto1 > auto2) {
		cout << "El auto 1 tiene que estar kilometros atrás que el auto 2" << endl;
		cout << "Primer auto aguascalientes-salamanca: "; cin >> auto1;
		cout << "Segundo auto salamanca-aguascalientes: "; cin >> auto2;
	}
	kilometros(auto1, auto2);
}
void kilometros(int a, int b) {
	int i = 0;
	while (a != b) {
		a++;
		b--;
		i++;
	}
	cout << "Se encontraron en el kilometro: " << a << endl;
	cout << "Recorieron: " << i << " kilometros." << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
