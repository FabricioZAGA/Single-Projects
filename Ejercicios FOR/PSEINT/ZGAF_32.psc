Algoritmo ZGAF_32
	Escribir 'Cuantos alumnos tiene'
	Leer alumnos
	Para i<-i Hasta (alumnos-1) Hacer
		Escribir 'Cuantos años tiene el alumno' i
		Leer edad
		aux = aux+edad
	FinPara
	promedio = aux/alumnos
	Escribir 'El promedio de edad es; ' promedio
FinAlgoritmo

