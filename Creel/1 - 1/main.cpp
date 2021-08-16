#include <iostream>

using namespace std;

extern "C" int UnaFuncion();
/*
	extern	=	Declara que la funci�n est� en otro archivo
	"C"		=	Dice que es la convenci�n para llamar funciones y pasar argumentos. No lo explica
	Declarar antes de main

	Registros de assembler en los que est�n los argumentos, en orden
		Ints
			RCX, RDX, R8, R9
		Floats
			XMM0, XMM1, XMM2, XMM3
		Si se pasa m�s de 4 p�r�metros, van por el stack
*/

int main() {
	cout << "UnaFuncion: " << UnaFuncion() << endl;
	return 0;
}