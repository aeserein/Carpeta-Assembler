/*

Flags
	No son de uso general
	No se pueden usar para operar, pero s� para comparar y hacer ifs
	Flags -> Registro original de 16 bits
	eFlags -> Registro de 32 bits a partir del i386
	rFlags -> Registro de 64 bits partir de Pentium 4
		Algunos son de uso general, otros dedicados
		La mayor�a de los bits en el registro de 64 bits no se usan

Registro Flags
           Nest    [  IOPL  ]   OFlow  Direc  Interr Trap   Sign   Zero           Aux           Par          Carry
	_____  _____  _____  _____  _____  _____  _____  _____  _____  _____  _____  _____  _____  _____  _____  _____	
	 15     14     13     12     11     10      9      8      7      6      5      4      3      2      1      0

	 ** Tienen un nombre diferente que les pone Microsoft en Visual Studio
		Solo es la forma en que los muestra

	 Carry
		CY en Visual studio
		1 Cuando hay un overflow despu�s de una operaci�n (del lado izquierdo)
		CTC
			Clear Carry Flag
			Pone la bandera en 0
		STC
			Set Carry Flag
			Pone la bandera en 1
	Parity
		PE en Visual Studio
		Paridad se refiere al bit de paridad de Baus
		No tiene uso
		0 Cuando la cantidad de 1s en la frase es par
		1 Cuando es impar
		Si uno ve los bits y el bit no coincide con la cantidad de 1s, es porque hubo un error de transmisi�n
	Auxiliary carry
		AC en Visual Studio
		No sirve
		Indica un overflow en los primeros 4 bytes del registro
			Un "nibble"
	Zero
		ZR en Visual Studio
		1 cuando el �ltimo registro operado qued� en 0
		0 cuando el registro no qued� en 0
		Saber qu� operaciones afectan banderas como Zero depende de la marca y se lee en el manual del micro
		Se usa en CMP
			CMP (Compare) hace una resta entre dos valores, pero no setea el resultado en el primer registro
			Si los 2 n�meros son iguales, la resta dar�a 0, y el Flag Zero se pondr�a en 1
	Sign
		PL en Visual Studio
		1 Si el resultado de una operaci�n fue negativo (si es un n�mero signed)
		0 Si el resultado fue positivo
	Direction
		UP en Visual Studio
		Para manipulaci�n de strings
		Las instrucciones de strings suben o bajan automaticamente un puntero al pr�ximo char a leer
		0 si est� leyendo de menor a mayor en las direcciones de la memoria RAM
		1 si est� leyendo de mayor a menor en las direcciones de la memoria RAM
		CLD
			Clear Direction Flag
			Pone la bandera en 0
		STD
			Set Direction Flag
			Pone la bandera en 1
	Overflow
		OV en Visual Studio
		Indica si el signo cambi�
		Dos condiciones para que se setee en 1
			En una operaci�n, los 2 valores son del mismo signo
			La operaci�n cambi� el signo (bit de la izquierda) de un valor leido como signed

	Banderas secundarias no cubiertas en la explicaci�n
		Trap
			Para saltear instrucciones
		Interrupt
			Indica si se permite mandar interrupciones (o recibir?)
		IOPL
			Indica prioridad IO
		Nested
			Indica si la tarea est� anidada

	C�mo leer el registro de Flags
	PUSHFQ
	POP RAX
		RAX pasa a contener todo el registro de 64 bits de las banderas

	C�mo cambiar el registro de lags
	PUSH RAX
	POPFQ
		El registro de banderas queda con los valores que hab�a en RAX

		
*/