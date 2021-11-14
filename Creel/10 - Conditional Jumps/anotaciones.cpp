/*

Conditional Jumps
	Instrucci�n J... seg�n condici�n
	Si la condicion "CC" es verdadera, el IP salta seg�n un offset
	Si la condici�n es falsa, sigue abajo ejecutando lo normal
	El salto es relativo al IP
		En vez de especificar un n�mero se pone un offset mediante un label
		Se le llama RIP relative addressing
	El salto no apunta al label, sin� a la l�nea abajo del label

Condicional Moves
	Instrucci�n CMOV... seg�n condici�n
	Si la condicion "CC" es verdadera, se asigna el seg�ndo valor al primer registro
	Si la condicion es falsa, no se cambia el registro
	No acepta valores inmediatos/literales/constantes
	Solo registros de 16, 32 y 64 bits
	Se puede usar un dato de la ram en el segundo argumento

Conditional Set byte / Set byte
	Instrucci�n SET... seg�n condici�n
	Un solo argumento de 8 bits
	Si la condicion "CC" es verdadera, el registro queda en el valor 1
	Si la condicion es falsa, el registro queda en 0

*/