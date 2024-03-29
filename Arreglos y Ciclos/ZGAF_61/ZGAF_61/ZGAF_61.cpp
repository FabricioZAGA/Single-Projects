/*
Universidad De La Salle Bajío
Ingeniería de Software y Sistemas Computacionales
Metodología y Programación de Sistemas
Autor: Angel Fabricio Zacarías Guzmán
Grupo: 111   Matrícula: 67664
Programa: 61 CICLOS ARREGLOS
Descripción: 2.	Se requiere un algoritmo para determinar cuánto ahorrará en pesos una persona diariamente,
y en un año, si ahorra 3¢ el primero de enero, 9¢ el dos de enero, 27¢ el 3 de enero y así sucesivamente todo el año.
Represente la solución mediante el diagrama de flujo, y su codificación en c++, utilizando el ciclo apropiado.
fecha 25/10/2018
*/

#include "pch.h"
#include <iostream>
using namespace std;
void cochinoTriste();
int main()
{
	cochinoTriste();
}
void cochinoTriste() {
	double pesdia[32], ahorroI = .02, ahorroMes[12] = { 0 }, diasMes[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	cout << "CAJA DE AHORRO, EL COCHINITO FELIZ!\n";
	for (int m = 0; m < 12; m++)
	{
		ahorroMes[m] = 0;
		pesdia[0] = ahorroI;
		ahorroI = ahorroI + .01;
		cout << "\n**** Mes " << (m + 1) << "****\n";
		for (int d = 0; d < diasMes[m]; d++)
		{
			cout << "Dia " << (d + 1) << ": " << pesdia[d] << "$ \t";
			pesdia[d + 1] = pesdia[d] * (m + 2);
			ahorroMes[m] += pesdia[d];
		}
		cout << "\nEl ahorro en el mes " << (m + 1) << " es de: " << ahorroMes[m] << "$\n";
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
