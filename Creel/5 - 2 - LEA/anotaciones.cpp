/*
	LEA
		Load Effective Address
		Crea un puntero
		Cuando uno crea una variable, el nombre solo es una asignación al número
		Si yo tengo una variable unByte = 10...
			MOV AL, unByte	-> AL = 10
		Pero si quiero la dirección de unByte
			LEA RAX, unByte
		Las direcciones siempre van a ser números de 64 bits porque la arquitectura es 64 bits
			Siempre hay que ponerlos en registros de 64
		La práctica es meter el puntero en el registro para modificarlo modificarlo
			LEA RAX, unDoble
			MOV dword ptr [RAX], 7
*/