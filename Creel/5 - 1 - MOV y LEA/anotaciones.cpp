/*
	MOV
		La instrucción más comun
		Es un copy del primer operando al segundo
		MOV destino, source
			Uno de estos 2 tiene que ser un registro sí o sí
			No se puede pasar de memoria a memoria
		Tienen que ser registros del mismo tamaño
			Ejemplo correcto
				MOV rax, r11
			Ejemplo incorrecto
				MOV cx, rax
	NOP
		(No operation)
		Es una operación que no hace nada
		Syntaxis -> NOP
		Solo mueve el puntero de instrucciones
			Suma un byte
			Para sumar más de un byte se hacen MOVs con direcciones iguales
				Depende del tamaño de las variables o registros la cantidad de bytes que suma
		Un MOV con 2 direcciones iguales es un NOP
			Ejemplo
					MOV RAX, RAX
*/