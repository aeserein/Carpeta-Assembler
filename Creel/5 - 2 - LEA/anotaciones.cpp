/*
	LEA
		Load Effective Address
		Crea un puntero
		Cuando uno crea una variable, el nombre solo es una asignaci�n al n�mero
		Si yo tengo una variable unByte = 10...
			MOV AL, unByte	-> AL = 10
		Pero si quiero la direcci�n de unByte
			LEA RAX, unByte
		Las direcciones siempre van a ser n�meros de 64 bits porque la arquitectura es 64 bits
			Siempre hay que ponerlos en registros de 64
		La pr�ctica es meter el puntero en el registro para modificarlo modificarlo
			LEA RAX, unDoble
			MOV dword ptr [RAX], 7
*/