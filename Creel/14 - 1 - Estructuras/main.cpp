#include <iostream>;
using namespace std;

class UnaClase;

extern "C" void unaFuncion(UnaClase& m);

class UnaClase {
	private:
		int i;

	public: 
		int getI() {
			return i;
		}
};

struct EstructuraConPadding {
	char c;		//	0
	int i;		//	4
	short s;	//	8
	double d;	//	16
};				//	24

#pragma pack(1)
struct EstructuraConPragmaPack {
	char c;		//	0
	int i;		//	1
	short s;	//	5
	double d;	//	7
};				//	15

int main() {
	cout << "Estructura con padding: " << sizeof(EstructuraConPadding) << endl;
	cout << "Estructura con pragma pack: " << sizeof(EstructuraConPragmaPack) << endl;

	UnaClase m;
	unaFuncion(m);
	cout << "Valor adentro de UnaClase: " << m.getI() << endl;
	return 0;
}