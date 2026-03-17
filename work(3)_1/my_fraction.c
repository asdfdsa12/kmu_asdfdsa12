#include <stdio.h>
#include "my_fraction.h"

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

ADT operate(ADT f1, char oper, ADT f2) {
	ADT finalf;
	switch (oper) {
	case '+':
		finalf.num = (f1.num * f2.den) + (f2.num * f1.den);
		finalf.den = f1.den * f2.den;
		break;
	case '-':
		finalf.num = (f1.num * f2.den) - (f2.num * f1.den);
		finalf.den = f1.den * f2.den;
		break;
	case '*':
		finalf.num = f1.num * f2.num;
		finalf.den = f1.den * f2.den;
		break;
	case '/':
		finalf.num = f1.num * f2.den;
		finalf.den = f1.den * f2.num;
		break;
	}
	return sim(finalf);
}

