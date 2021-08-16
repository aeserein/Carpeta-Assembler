#include <iostream>

using namespace std;

extern "C" int AssemblerRotate(unsigned long long& l);

void printBits(int carry, unsigned long long n, int cBits) {
	cout << "C: " << carry << " ";
	for (int f = cBits - 1; f >= 0; f--) {
		cout << ((n >> f) & 1);
	}
	cout << endl;
}

int main() {
	unsigned long long l = 12341;
	int carry = 0;

	printBits(carry, l, 64);
	cin.get();

	while (true) {
		carry = AssemblerRotate(l);
		printBits(carry, l, 64);

		cin.get();
	}
}