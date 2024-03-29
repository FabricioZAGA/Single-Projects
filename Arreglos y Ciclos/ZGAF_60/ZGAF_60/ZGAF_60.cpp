/*
Universidad De La Salle Bajío
Ingeniería de Software y Sistemas Computacionales
Metodología y Programación de Sistemas
Autor: Angel Fabricio Zacarías Guzmán
Grupo: 111   Matrícula: 67664
Programa: 60 CICLOS ARREGLOS
Descripción: Un profesor tiene un salario inicial de $1500,
y recibe un incremento de 4 %  para el primer año, 5% para el segundo,
7 % para el tercero, 9 para el cuarto, 12 para el quinto y 15%  durante los primeros 6 años.
¿Cuál es su salario al cabo de 6 años? ¿Qué salario ha recibido en cada uno de los 6 años?.
Represente la solución mediante el diagrama de flujo, y su codificación en c++, utilizando el ciclo apropiado.
fecha 23/10/2018
*/


#include "pch.h"
#include <iostream>
using namespace std;
float calcSal(float sa, int an);
int main()
{
	float sin[100], sto = 0, anio = 0;
	cout << "Digite salario inicial: "; cin >> sin[0];
	while (sin[0] < 2686) {
		cout << "El salario minimo es de 88 pesos al dia >:v\n";
		cout << "Ingresa tu salario de verdad: "; cin >> sin[0];
	}
	do{
		cout << "Digite el anio: "; cin >> anio;
	} while (anio < 1);

	for (int i = 1; i <= anio; i++) {
		sin[i] = calcSal(sin[i - 1], i);
		cout << "\nEl salario del anio " << i << " es igual a: " << sin[i];
		sto = sto + sin[i];
	}
	cout << "\nSu salario en " << anio << " anios es de: " << sto;
}
float calcSal(float sa, int an) {
	float in = 0, sn = 0;
	switch(an) {
	case 1: in = 0.04;
		break;
	case 2: in = 0.05;
		break;
	case 3: in = 0.07;
		break;
	case 4: in = 0.09;
		break;
	case 5: in = 0.12;
		break;
	case 6: in = 0.15;
		break;
	default: in = 0.15;
		break;
	}
	sn = sa * (1 + in);
	return sn;
}

/*float sin[7], sto = 0, ano = 0;
cout << "Digite salario inicial:"; cin >> sin[0];
sin[1] = (sin[0] * 1.04) * 12;
sin[2] = (sin[0] * 1.05) * 12;
sin[3] = (sin[0] * 1.07) * 12;
sin[4] = (sin[0] * 1.09) * 12;
sin[5] = (sin[0] * 1.12) * 12;
sin[6] = (sin[0] * 1.15) * 12;
for (int i = 1; i < 7; i++) {
	cout << "\nSu salario el anio " << i << " fue de: " << sin[i];
	sto = sto + sin[i];
}
	for (int i = 1; i <= anio; i++) {
	sa[i] = (sa[0] * inc) * 12;
	cout << "\nSu salario el anio " << i << " fue de: " << sin[i];
}
cout << "Su salario de 6 anios es: " << sto;*/
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
