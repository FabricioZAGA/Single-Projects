Algoritmo ZGAF_33
	Escribir "Cuantos valores desea comprobar: "
	Leer num
	i=1
	Mientras i < num Hacer
		Escribir "Escriba un valor: "
		Leer val
		Si val <=0 Entonces
			Escribir "Este valor es menor o igual que 0: "
			neg = neg + 1
		SiNo
			Escribir "Este valor es mayor que 0: "
			pos = pos + 1
			i = i + 1
			finsi
	Fin Mientras
	Escribir "Valores menor igual 0: " neg
	Escribir "Valores mayor 0: " pos
FinAlgoritmo
