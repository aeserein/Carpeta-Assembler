/*
	GCD = "Greatest Common Divisor"
	El GCD entre A y B = GCD entre (A % B) y B
									  ^módulo
	Se hace recursivamente, eventualmente uno llega a 0
		El otro es el resultado

*/

#include <iostream>
using namespace std;

extern "C" long long assemblerGCD(unsigned long long a, unsigned long long b);

int gcd(unsigned a, unsigned b) {
	if (a <= 0 || b <= 0)
		return 0;
	
	while (b != 0) {
		int aux = b;
		b = a % b;
		a = aux;
	}
	return a;
}

int main() {
	cout << "GCD: " << assemblerGCD(10, 5) << endl;

	cin.get();

	return 0;
}