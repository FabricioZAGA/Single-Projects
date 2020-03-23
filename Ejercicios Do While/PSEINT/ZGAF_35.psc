Algoritmo ZGAF_35
	Escribir "Cuantos centavos le da por hora al esclavo: "
	Leer sueldo
	i=0
	Repetir
		Escribir "Cuantas horas trabaja su esclavo el dia " i
		Leer horas2
		
		horast= horast+ horas
		i = i + 1
	Hasta Que i=6
	sueldot = sueldo * horast;
	Escribir "Su esclavo trabajó: " horast
	Escribir "Y gana " sueldot
FinAlgoritmo
