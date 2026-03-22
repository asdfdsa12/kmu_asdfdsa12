#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
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

ADT check(char* v) {
	ADT f = { 0,1 };
	if (strchr(v, '.')) {
		float temp;
		sscanf(v, "%f", &temp);
		f.num = (int)(temp * 10000);
		f.den = 10000;
		f = sim(f);
	}
	else
		sscanf(v, "%d/%d", &f.num, &f.den);
	return f;
}