/*
	MOV
		La instrucci�n m�s comun
		Es un copy del primer operando al segundo
		MOV destino, source
			Uno de estos 2 tiene que ser un registro s� o s�
			No se puede pasar de memoria a memoria
		Tienen que ser registros del mismo tama�o
			Ejemplo correcto
				MOV rax, r11
			Ejemplo incorrecto
				MOV cx, rax
	NOP
		(No operation)
		Es una operaci�n que no hace nada
		Syntaxis -> NOP
		Solo mueve el puntero de instrucciones
			Suma un byte
			Para sumar m�s de un byte se hacen MOVs con direcciones iguales
				Depende del tama�o de las variables o registros la cantidad de bytes que suma
		Un MOV con 2 direcciones iguales es un NOP
			Ejemplo
					MOV RAX, RAX
*/