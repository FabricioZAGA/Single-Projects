/*
Universidad De La Salle Bajío
Ingeniería de Software y Sistemas Computacionales
Metodología y Programación de Sistemas
Autor: Angel Fabricio Zacarías Guzmán
Grupo: 111   Matrícula: 67664
Programa: 32 WHILE
Descripción: 3.	Se requiere un algoritmo para obtener
la edad promedio de un grupo de N alumnos.
fecha 23/09/2018
*/

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int alumnos, edad, i = 1, promedio = 0, suma = 0;
	cout << "Digite la cantidad de alumnos: "; cin >> alumnos;
	while (i <= alumnos) {
		cout << "Cuantos años tiene el alumno: " << i << ": ";
		cin >> edad;
		suma = edad + suma;
		i++;
	}
	promedio = suma / alumnos;
	cout << "El promedio de edad es: " << promedio << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
