#include <iostream>

using namespace std;

extern "C" int UnaFuncion();
/*
	extern	=	Declara que la función está en otro archivo
	"C"		=	Dice que es la convención para llamar funciones y pasar argumentos. No lo explica
	Declarar antes de main

	Registros de assembler en los que están los argumentos, en orden
		Ints
			RCX, RDX, R8, R9
		Floats
			XMM0, XMM1, XMM2, XMM3
		Si se pasa más de 4 párámetros, van por el stack
*/

int main() {
	cout << "UnaFuncion: " << UnaFuncion() << endl;
	return 0;
}