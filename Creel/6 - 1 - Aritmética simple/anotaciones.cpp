/*

ADD
	ADD [registro], [valor]
	Pone el resultado en el primer campo
	Afecta flags overflow, carry, sign, zero y 2 más que no importan
		Overflow significa signed, carry significa unsigned
	** Sumando registros de 32 bits Y de los 8 registros originales la instrucción mide un byte menos
		Esto es más efectivo y hay que preferir sumar de esa forma
	** Se puede usar "ADD [registro], 0" para setear las flags del registro sin cambiar su valor
	** "ADD [registro], 1" es mejor que INC [registro] porque modifica la flag de carry
	** ADD es más rápida que la multiplicación x2
		ADD RAX, RAX es más rápida que ????????
	** No hay "operando inmediato" (pasar un número en vez de una variable) de 64 bits
		Lo agarra como 32 bits y se cambia de signo. No lo explica
		Hay que meterlo en un registro con MOV y sumarlo

SUB
	SUB [registro], [valor]
	Pone el resultado en el primer registro
	Afecta banderas overflow, carry, sign, zero y 2 más que no importan
		Overflow significa signed, carry significa unsigned
	** Tampoco se puede hacer restar bien con números de 64 bits, hay que pasar a variable
	** "SUB [registro], 1" es mejor que "DEC [registro]" porque afecta el carry

INC
	Incrementa 1
	INC [registro]
	No cambia la bandera carry, sí afecta overflow, zero y sign
	INC overflowea registros
		Ejemplo
			MOV AL, 255
			INC AL			; AL es 0, y el noveno bit no cambió
			Y esto no cambia el carry
	INC a veces es una instrucción más chica que ADD 1, pero eso no suele importar por el carry

DEC
	Decrementa 1
	DEC [registro]
	No cambia la bandera carry, sí afecta overflow, zero y sign

*/