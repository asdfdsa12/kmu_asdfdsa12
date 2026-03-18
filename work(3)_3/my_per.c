#include <stdio.h>
#include "my_per.h"

int gcd(int a, int b) {
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

ADT sim(ADT f) {
	int simf = gcd(f.num, f.den);
	f.num /= simf;
	f.den /= simf;
	if (f.den < 0) {
		f.num = -f.num;
		f.den = -f.den;
	}
	return f;
}