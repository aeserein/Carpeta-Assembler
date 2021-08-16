/*
	3 categorías de tipos de dato
		Integers
		Floating point
		SIMD Pointers
	Se puede declarar estructuras, pero no en todos los assemblers
	Assembler es como C, no tiene ningún tipo de seguridad en los tipos de datos
		Si un dato entra en el tamaño de una variable o registro, lo pone
	No hay signed y unsigned como norma en el lenguaje
		Se maneja manual
	Binario en C2
		Repasar?
	Integer
		Byte -> 8 bits, 0-255 unsigned, -128,+127 signed
		Word -> 16 bits
			Se le dice word porque 16 bits era el tamaño de los micros originales
			Se le dice tipo de dato fundamental por ser el original
				A pesar de que hoy el fundamental sería Qword
		Dword -> Double word, 32 bits, 0-65535 unsigned
		Qword -> Double-quad-word, 64 bits
	Floating point
		Real4 -> IEEE754 single precision, 32 bits, 1 para el signo, 8 para el exponente, 23 mantisa
		Real8 -> IEEE754 doble precision, 64 bits, 1 para signo, 11 para exponente, 52 para mantisa
		Real10 -> IEEE754 precision extendida, 80 bits, 1 para signo, 15 para exponente, 64 para mantisa
			Solo se usa en la FPU (floating point unit) x87
	SIMD
		Xmmword -> 128 bits (16 bytes, 8 words, 4 dwords, 2 qwords)
		Ymmword -> 256 bits (32 bytes, 16 words, 8 dwords, 4 qwords)
		Zmmword -> 512 bits (64 bytes, 32 words, 16 dwords, 8 qwords)
			No esta disponible en micros comunes

	Para definir cada uno de estos tipos
		Integer
			Byte -> db / byte
			Word -> dw / word
			Dword-> dd / dword
			Qword-> dq / qword
		FP
			Single -> real4
			Doble -> real8
			Extended -> real10
		SIMD
			Xmmword -> xmmword
			Ymmword -> ymmword
			Zmmword -> ???
		** Para punteros a cada cosa se declara [tipo] "ptr"
			Ejemplo -> word ptr
		Esta sintaxis para declarar tipos de dato es específica a cada assembler
*/