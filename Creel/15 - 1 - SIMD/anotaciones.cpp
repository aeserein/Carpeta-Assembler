/*
	Definici�n
		Single Instruction Multiple Data
	Segun la Taxonom�a de Flynn
		SISD -> Single Instruction Single Data
			Una instrucci�n corriendo sobre una variable a la vez
		SIMD -> Single Instruction Multiple Data
			Una instrucci�n corriendo en m�ltiples lugares a la vez
		MISD -> Multiple Instruction Single Data
			Poco uso
		MIMD -> Multiple Instruction Multiple Data
			Micros modernos donde cada n�cleo puede correr una instrucci�n diferente sobre un dato diferente
	
	Velocidades de micros
		Durante los 80 y 90 los micros aumentaban mucho la velocidad de procesamiento
		A partir de principios de los 2000 se empieza a llegar a un l�mite
		Aumentar la velocidad de procesamiento tiene un costo exponencial de energ�a
			Y los materiales se calientan acorde a esa energ�a
		En lugar de aumentar la velocidad, las empresas empezaron a incluir paralelismo
			(m�ltiples nucleos)
		Otra forma de mejorar el rendimiento es incluyendo unidades SIMD

	Operaci�n escalar
		c = a + b
	Operaci�n SIMD
		c[0] = a[0] + b[0]
		c[1] = a[1] + b[1]
		c[2] = a[2] + b[2]
		c[3] = a[3] + b[3]
		(Una sola operaci�n)
	Los compiladores de C y C++ vienen con opciones para usar SIMD
	SIMD en Assembler es un conjunto de instrucc�ones
		Vienen distintas generaciones de instrucciones SIMD
	
	Generaciones
	Las generaciones de SIMD son correlativas a la cantidad de registros que se fueron aumentado
	Las generaciones de SIMD vienen con registros que se usan como vectores
	MMX	(Pendium 1, 1997)
		8 registros MM0 -> MM7
		En desuso
	SSE
		Registros de 16 bytes (128 bits)
		Hay distintas generaciones de SSE que van agregando instrucciones
		16 registros en 64 bits
		8 registros si el micro es de 32 bits
		XMM0 -> XMM15
	AVX (2011)
		Registros de 32 bits (256 bits)
		Distintas generaciones
		YMM0 -> YMM15
	AVX512
		Registros de 64 bits (512 bits)
		ZMM0 -> ZMM31
			Con la primera mitad como 32 vectores YMM0 -> YMM31
			Y el primer cuarto como 32 vectores XMM0 -> XMM 15
	**Los vectores se pueden dividir en bytes, words, dwords, qwords
		Un registro SSE se puede dividir en 16 bytes, 8 words, 4 dwords, 2 qwords
		Un registro AVX se puede dividir en 32 bytes, 16 words, 8 dwords, 4 qwords
		Un registro AVX512 se puede dividir en 64 bytes, 32 words, 16 dwords, 8 qwords

	C y C++ tienen librer�as ("intrinsics") para operar con SIMD
*/