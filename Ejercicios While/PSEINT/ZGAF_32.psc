Algoritmo ZGAF_32
	Escribir "Cuantos alumnos tiene"
	Leer alumnos
	i=0
	Mientras i < alumnos Hacer
		Escribir "Cuantos años tiene el alumno" i
		Leer edad
		aux = aux + edad
		i = i + 1
	Fin Mientras
	promedio = aux / alumnos
	Escribir "El promedio de edad es; " promedio
FinAlgoritmo
