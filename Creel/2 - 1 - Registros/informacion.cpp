/*
	Tipos de registros
		Empieza por explicarlo en micros viejos, pero sirve igual
			Son de 16 bit

	Uso general
		AX, BX, CX, DX
		Si todos tienen 2 byte,
			El primer byte es AH, BH, CH, DH
			El segundo byte es AL, BL, CL, DL

	Index
		SI	=	Source Index
		DI	=	Destination Index
		16 byte
		Son buenos para apuntar a puntas de un string o array

		BP	=	Base Pointer
		SP	=	Stack Pointer
		No se opera casi nunca sobre estos valores

	Instrucciones
		IP	=	Instruction Pointer
		Apunta a las instrucciones dentro de una función
		No se hace operaciones con esto

	Segmentos
		Ya en desuso
		CS, DS, ES, SS

	Banderas
		Guardan el estado de una comparación para decidir ifs
*/