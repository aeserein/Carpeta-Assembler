/*
	Pasar par�metros
		Los registros usados para pasar par�metros dependen del compilador y/o del sistema operativo
		En est� m�quina uso la convenci�n "Windows C"
				Int/puntero		Float
			1�	RCX				XMM0
			2�	RDX				XMM1
			3�	R8				XMM2
			4�	R9				XMM3
			+	Stack			Stack
		En Windows, si el primer argumento es un float, va a usar XMM0,
			Si el segundo es un int, va a usar RDX
				Si el tercero es un float, va a usar XMM2
			En Windows el orden es absoluto entre los 2 tipos
			En Linux si el primero es float y el segundo es int, el segundo usa RCX
		Los argumentos a partir del quinto requieren una explicaci�n aparte del stack
	Devolver valores
		Int -> RAX
			Byte = AL
			Short = AX
			32Int = EAX
			64Int = RAX
		Punteros -> RAX
		Decimales -> XMM0
			Float -> XMM0		(real4)
			Doble -> XMM0		(real8)
*/

class Menem {
	public:
		int i;
		Menem() {
			i = 5;
		}
};

extern "C" float funcionTestArgumentos(short n1, float n2, Menem n3, Menem* n4);

int main() {
	Menem aeeea;
	Menem* punteroMenemista = &aeeea;
	float valorDevuelto = funcionTestArgumentos(67, 56765.9, aeeea, punteroMenemista);
	//											  ^		^	   ^			^
	//											 RCX  XMM1	 R8 (el 5)	   R9

	return 0;
}