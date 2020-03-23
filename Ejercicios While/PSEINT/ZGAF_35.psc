Algoritmo ZGAF_35
	Escribir "Cuantos centavos le da por hora al esclavo: "
	Leer sueldo
	i=1
	Mientras i < 7 Hacer
		Escribir "Cuantas horas trabaja su esclavo el dia " i
		Leer horas2
		
		horast= horast+ horas
	Fin Mientras
	sueldot = sueldo * horast;
	Escribir "Su esclavo trabajó: " horast
	Escribir "Y gana " sueldot
FinAlgoritmo
