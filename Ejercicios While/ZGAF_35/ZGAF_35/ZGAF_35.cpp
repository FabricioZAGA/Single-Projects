/*
Universidad De La Salle Bajío
Ingeniería de Software y Sistemas Computacionales
Metodología y Programación de Sistemas
Autor: Angel Fabricio Zacarías Guzmán
Grupo: 111   Matrícula: 67664
Programa: 06
Descripción: Una empresa tiene el registro de las horas que
trabaja diariamente un empleado durante la semana
(seis días) y requiere determinar el total de éstas,
así como el sueldo que recibirá por las horas trabajadas.
fecha 24/09/2018
*/

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int aux, horas, horast = 0, i = 1;
	float sueldo, sueldot;
	cout << "Cuantos centavos le da por hora al esclavo: "; cin >> sueldo;
	while (i < 7) {
		cout << "Cuantas horas trabaja su esclavo el dia " << i << endl; cin >> horas;
		horast = horast + horas;
		i++;
	}
	sueldot = sueldo * horast;
	cout << "su esclavo trabajo: " << horast << " en esta semana" << endl;
	cout << "Y gana: " << sueldot << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
