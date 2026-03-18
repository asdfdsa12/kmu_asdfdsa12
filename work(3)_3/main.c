#include <stdio.h>
#include "my_per.h"

int main(int c,char** v) {
	ADT f1, f2, per, area;

	if (c != 3) {
		printf("how to use: %s num1 num2", v[0]);
		return 0;
	}

	f1.num = v[1][0]-48;
	f1.den = v[1][2]-48;
	f2.num = v[2][0]-48;
	f2.den = v[2][2]-48;

	per.num = (f1.num * f2.den + f2.num * f1.den) * 2;
	per.den = f1.den * f2.den;
	per = sim(per);

	area.num = f1.num * f2.num;
	area.den = f1.den * f2.den;
	area = sim(area);

	printf("Perimeter: %d/%d, Area: %d/%d", per.num, per.den, area.num, area.den);
	return 0;
}