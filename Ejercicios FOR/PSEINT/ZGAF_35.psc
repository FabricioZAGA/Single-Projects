Algoritmo ZGAF_35
	Escribir "Cuantos centavos le da por hora al esclavo: "
	Leer sueldo
	Para i=1 Hasta 6 Con Paso 1 Hacer
		Escribir "Cuantas horas trabaja su esclavo el dia " i
		Leer horas2
		
		horast= horast+ horas
	Fin Para
	sueldot = sueldo * horast;
	Escribir "Su esclavo trabajó: " horast
	Escribir "Y gana " sueldot
FinAlgoritmo
