#include <stdio.h>
#include "my_per.h"

int main(int c, char** v) {
	if (c != 3) {
		printf("Usage: %s <num1> <num2>", v[0]);
		return 0;
	}
	ADT f1 = { 0,1 }, f2 = { 0,1 }, per, area;
	f1 = check(v[1]);
	f2 = check(v[2]);
	if (f1.den == 0 || f2.den == 0) {
		printf("denominator cannot be 0");
		return 0;
	}

	per.num = (f1.num * f2.den + f2.num * f1.den) * 2;
	per.den = f1.den * f2.den;
	per = sim(per);

	area.num = f1.num * f2.num;
	area.den = f1.den * f2.den;
	area = sim(area);

	per.den == 1 ? printf("Perimeter: %d, ", per.num) : printf("Perimeter: %d/%d, ", per.num, per.den);
	area.den == 1 ? printf("Area: %d", area.num) : printf("Area: %d/%d", area.num, area.den);
	return 0;
}