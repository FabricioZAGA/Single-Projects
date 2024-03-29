/*
Universidad De La Salle Bajío
Ingeniería de Software y Sistemas Computacionales
Metodología y Programación de Sistemas
Autor: Angel Fabricio Zacarías Guzmán
Grupo: 111   Matrícula: 67664
Programa: 33 FOR
Descripción: Se requiere un algoritmo para determinar, de N cantidades,
cuántas son menores o iguales a cero y cuántas mayores a cero.
fecha 19/09/2018
*/

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int numeros, valor, positivo = 0, negativo = 0;
	cout << "Cuantos numeros desea comprobar: "; cin >> numeros;
	for (int i = 1; i <= numeros; i++) {
		cout << "Introduzca el valor " << i << " : "; cin >> valor;
		if (valor <= 0) {
			cout << "Este valor es menor o igual que 0: " << valor << endl;
			negativo += 1;
		}
		else {
			cout << "Este valor es mayor que 0: " << valor << endl;
			positivo += 1;
		}
	}
	cout << "Usted tiene: " << positivo << " numeros positivos\n";
	cout << "Y tiene: " << negativo << " numeros negativos o iguales a 0\n";
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
