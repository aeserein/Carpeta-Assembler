/*
	32 bits
		A partir del procesador Intel 386
		Se agrega una E al principio de los mismos registros que existen en 16
			AX -> EAX		Uso general
			BX -> EBX		Uso general
			CX -> ECX		Uso general
			DX -> EDX		Uso general
			SI -> ESI		Source index
			DI -> EDI		Destination index
			BP -> EBP		Base pointer
			SP -> ESP		Stack pointer
			IP -> EIP		Instruction pointer
			Flags -> EFlags
			También están los registros de memoria segmentada que no se usan

	64 bits
		A partir del Intel Pentium 4
		Se agrega una R en vez de una E
		Se agregan 8 registros de uso general
			La nominación es por números, y es más intruitiva
			Pero se mantienen los nombres de los primeros 8 registros para mantener la compatibilidad
			 para que los códigos de 32 bits corran en micros de 64
		También se agregan nominaciones para el primer byte de SI, DI, BP y SP
			Se llaman SIL, DIL, BPL, SPL
				Source index low, Destination index low, Base pointer low, Stack pointer low
												  __
			EAX -> RAX		Uso general				|
			EBX -> RBX		Uso general				|
			ECX -> RCX		Uso general				|
			EDX -> RDX		Uso general				|
			ESI -> RSI		Source index			|	8 originales
			EDI -> RDI		Destination index		|
			EBP -> RBP		Base pointer			|
			ESP -> RSP		Stack pointer		  __|
												  __
			R8			Uso general					|
			R9			Uso general					|
			R10			Uso general					|
			R11			Uso general					|
			R12			Uso general					|	8 nuevos
			R13			Uso general					|
			R14			Uso general					|
			R15			Uso general				  __|

			EIP -> RIP		Instruction pointer
			EFlags -> RFlags
	
	**Todos las partes menores dentro del registro de 64 mantienen sus nombres y se pueden manipular
		 ---------------------------------------------------------------
		|				64				|		32		|	16	|	8	|
		|---------------------------------------------------------------|
		|				RAX				|		EAX		|		AX		|	Uso general
		|								|				|	AH	|	AL	|
		|---------------------------------------------------------------|
		|				RBX				|		EBX		|		BX		|	Uso general
		|								|				|	BH	|	BL	|
		|---------------------------------------------------------------|
		|				RCX				|		ECX		|		CX		|	Uso general
		|								|				|	CH	|	CL	|
		|---------------------------------------------------------------|
		|				RDX				|		EDX		|		DX		|	Uso general
		|								|				|	DH	|	DL	|
		|---------------------------------------------------------------|
		|				RSI				|		ESI		|	SI	|	SIL	|	Source index
		|---------------------------------------------------------------|
		|				RDI				|		EDI		|	DI	|	DIL	|	Destination index
		|---------------------------------------------------------------|
		|				RBP				|		EBP		|	BP	|	BPL	|	Base pointer
		|---------------------------------------------------------------|
		|				RSP				|		ESP		|	SP	|	SPL	|	Stack pointer
		|---------------------------------------------------------------|
		|				R8				|		R8D		|  R8W	|  R8B	|
		|---------------------------------------------------------------|
		|				R9				|		R9D		|  R9W	|  R9B	|
		|---------------------------------------------------------------|
		|				R10				|		R10D	|  R10W	|  R10B	|
		|---------------------------------------------------------------|
		|				R11				|		R11D	|  R11W	|  R11B	|
		|---------------------------------------------------------------|
		|				R12				|		R12D	|  R12W	|  R12B	|
		|---------------------------------------------------------------|
		|				R13				|		R13D	|  R13W	|  R13B	|
		|---------------------------------------------------------------|
		|				R14				|		R14D	|  R14W	|  R14B	|
		|---------------------------------------------------------------|
		|				R15				|		R15D	|  R15W	|  R15B	|
		|---------------------------------------------------------------|
		|				RIP				|				EIP				|
		|---------------------------------------------------------------|
		|				RFlags			|	  EFlags	|	  Flags		|
		 ---------------------------------------------------------------

		A partir de R8 se llaman así solo por conveniencia
		Subnominaciones de los registros nuevos
			R8D -> R8 Doble
			R8W -> R8 Word
			R8B -> R8 Byte
		Los registros nuevos son iguales a los viejos, solo tienen nombres más intuitivos
			Los registros RAX a RSP bien podrían ser R0 a R7, pero mantienen los nombres originales por compatibilidad
		** Las operaciones con registros de 32 bits ponen en 0 los 32 bits de adelante
			Tener cuidado con operar registos de 32 bits en programas de 64
			Cualquier cambio en un registro de 32 bits va a eliminar lo que sea que haya en los primeros 32 bits
			 de su ubicación de 64 bits
				Esto se puede ver en el demo de este proyecto
*/