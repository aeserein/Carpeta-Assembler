/*
	DIV		->	Unsigned
	IDIV	->	Signed
	Un solo argumento
		El divisor
		El operando por defecto es RAX
			Ver ejemplo
	Dado el tama�o del divisor, el resultado ser� el doble de tama�o
		Para divisor de 8 bits
			Resultado entero de 16 bits
				Resultado en AL
				Resto en AH
		Para divisor de 16 bits
			El operando es una combinaci�n de DX y AX
				DX:AX
			Resultado en AX
			Resto en DX
			Hay que limpiar DX antes de dividir si no es necesario un n�mero tan grande
		Para divisor de 32 bits
			Operando -> EDX:EAX
			Resultado en EAX
			Resto en EDX
			Hay que limpiar EDX antes de dividir si no es necesario un n�mero tan grande
		Para divisor de 64 bits
			Operando -> RDX:RAX
			Resultado en RAX
			Resto en RDX
			Hay que limpiar RDX antes de dividir si no es necesario un n�mero tan grande
				En el ejemplo de 64 bits RDX tiene valor, en los otros ejemplos no
*/