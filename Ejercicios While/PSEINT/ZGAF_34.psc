Algoritmo ZGAF_34
	Escribir "Cuantos numeros desea generar" 
	Leer cantidad 
	a = 0
	b = 1
	c = 0
	i=1
	Escribir "0"
	Mientras i < cantidad Hacer
		a = b + c;
		Escribir a
		b = c;
		c = a;
		i = i + 1
	Fin Mientras
FinAlgoritmo
