/*

SHIFT
	Mueve todos los bits hacia la izquierda o la derecha
	Se especifica una cantidad
		Desde 1 hasta 63 en registros de 64 bits
			La misma regla en registros más chicos
		Si se pone 64, es igual a 0
			Y si se pone 65, es igual a 1, etc.
	SFL mueve a la izquierda
	SFR mueve a la derecha
	Banderas que actualiza
		Carry
			Cada vez que se corre un bit, ese bit queda como el carry del registro
			Si se mueve de a más de un bit, el último que se mueve es el que marca el carry
				Si muevo 01 a la izquierda, el último es el 1
				Si muevo 01 a la derecha, el último es el 0
		Overflow
			Se pone en 1 si cambió el signo del registro por la configuración de bits
	Cada vez que se corren los bits hacia un lado, en la otra punta queda 0
	Para mover una cantidad dinámica definida en una variable, solo se puede usar el registro CL
	Shiftear por 0 es igual a un NOP, que no cambia ninguna bandera

	SAR
		Otro shift, hacia la derecha
		Shift Arithmetic Right
		Se puede shiftear hacia la derecha para dividir
			Es más rápido que la division
			Se puede shiftear hacia la derecha n veces y eso divide el número por 2ⁿ
			Ejemplo
				32			-> 10000
				SHR 32, 1	-> 01000 = 16
				32 / 2¹ = 16
			**Esto se rompe si el número es negativo
				Porque en cada shift aparece un 0 a la izquierda y eso lo convierte en positivo
				Por eso se usa SAR
		SAR pone en el lado opuesto el bit correcto segun el signo original del número
		Esto tiene sentido solo en el shift hacia la derecha
		Existe SAL, pero no pone 1s a la derecha de la frase
			Esto cambiaría el número
		SAL es la misma operación que SHL
			Es literalmente la misma operación que se compila en el mismo número de la instrucción que tiene SHL

	Double precision shift
		SHLD Shift left double
		SHRD Shift right double
		Es un shift con 3 argumentos, donde la cantidad de bits shifteados del segundo argumento aparece en el lado opuesto del primero
		No es difícil pero parece inutil
		Buscarlo cuando pueda parecer necesario
*/