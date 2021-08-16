/*
* 
ROTATE
	Hace lo mismo que shift, pero mandando el bit que queda afuera a la otra punta de la frase
	ROL rota hacia la izquierda
	ROR rota hacia la derecha
	Para rotar seg�n una variable, tambi�n se usa con CL
	El carry tambi�n cambia seg�n el �ltimo bit rotado

	Rotate carry
		RCL Rotate Carry Left
		RCR Rotate Carry Right
		Hace lo mismo que en el ROL o ROR
			Pero usa el carry como si fuese parte de la frase
			En vez de rotar 64 bits, rota [carry bit]+[registro] todo junto
*/