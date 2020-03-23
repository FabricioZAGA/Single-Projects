Algoritmo ZGAF_32
	Escribir "Cuantos alumnos tiene"
	Leer alumnos
	i=0
	Repetir
		Escribir "Cuantos años tiene el alumno" i
		Leer edad
		aux = aux + edad
		i = i + 1
	Hasta Que i = alumnos
	promedio = aux / alumnos
	Escribir "El promedio de edad es; " promedio
FinAlgoritmo
