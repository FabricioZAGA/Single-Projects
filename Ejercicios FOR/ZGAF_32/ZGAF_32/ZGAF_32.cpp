/*
Universidad De La Salle Bajío
Ingeniería de Software y Sistemas Computacionales
Metodología y Programación de Sistemas
Autor: Angel Fabricio Zacarías Guzmán
Grupo: 111   Matrícula: 67664
Programa: 32 FOR
Descripción: Se requiere un algoritmo para obtener
la edad promedio de un grupo de N alumnos.
fecha 13/09/2018
*/

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int aux = 0, edad, alumnos;
	float promedio;
	cout << "Cuantos alumnos tiene: "; cin >> alumnos;
	for (int i = 1; i <= alumnos; i++)
	{
		cout << "Cuantos años tiene el alumno " << i << " :  "; cin >> edad;
		aux = aux + edad;
	}
	promedio = aux / alumnos;
	cout << "El promedio de edad es: " << promedio << endl;
	system("pause");
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
