Algoritmo ZGAF_34
	Escribir "Cuantos numeros desea generar" 
	Leer cantidad 
	a = 0
	b = 1
	c = 0
	Para i<-1 Hasta cantidad Con Paso 1 Hacer
		a = b + c;
		Escribir a
		b = c;
		c = a;
	Fin Para
FinAlgoritmo
