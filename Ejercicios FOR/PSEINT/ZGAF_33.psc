Algoritmo ZGAF_33
	Escribir "Cuantos valores desea comprobar: "
	Leer num
	Para i = 1 Hasta num Con Paso 1 Hacer
		Escribir "Escriba un valor: "
		Leer val
		Si val <=0 Entonces
			Escribir "Este valor es menor o igual que 0: "
			neg = neg + 1
		SiNo
			Escribir "Este valor es mayor que 0: "
			pos = pos + 1
		Fin Si
	Fin Para
	Escribir "Valores menor igual 0: " neg
	Escribir "Valores mayor 0: " pos
FinAlgoritmo
