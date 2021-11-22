/*
	Pasar parámetros
		Los registros usados para pasar parámetros dependen del compilador y/o del sistema operativo
		En está máquina uso la convención "Windows C"
				Int/puntero		Float
			1º	RCX				XMM0
			2º	RDX				XMM1
			3º	R8				XMM2
			4º	R9				XMM3
			+	Stack			Stack
		En Windows, si el primer argumento es un float, va a usar XMM0,
			Si el segundo es un int, va a usar RDX
				Si el tercero es un float, va a usar XMM2
			En Windows el orden es absoluto entre los 2 tipos
			En Linux si el primero es float y el segundo es int, el segundo usa RCX
		Los argumentos a partir del quinto requieren una explicación aparte del stack
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