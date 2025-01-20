// E2EE.cpp: определяет точку входа для приложения.
//

#include "E2EE.h"

using namespace std;

long double stage(long long base, long long index) {
	long double number = 1;
	if (base == 0 && index == 0) {
		return NAN;
	}
	if (index < 0) {
		return 1/stage(base, -index);
	}
	if (index == 0) return 1;
	if (index > 0) {
		for (unsigned int i = 0; i < index; i++) {
			number = number * base;
		}
		return number;
	}
}

bool isPrime(unsigned long long num) {
	for (unsigned long long i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	unsigned long long p;
	unsigned long long q;
	unsigned size;
	cout << "Enter size of 2 prime numbers to generate open key(bigger numbers - harder generation).\nRecommended: 1024 bit - 4096 symbols." << endl;
	cin >> size;
	cout << isPrime(size + 1) << endl << stage(3, 3) << endl << stage(2, 5) << endl << stage(2, -2) << endl << stage(34, 1) << endl << stage(12, 0) << endl << stage(0, 0) << endl;
	cout << "Hello CMake." << endl;
	return 0;
}
