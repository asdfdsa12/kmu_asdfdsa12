#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "my_fraction.h"

int main() {
	ADT f1, f2, f3;
	char oper;
	scanf("%d/%d %c %d/%d", &f1.num, &f1.den, &oper, &f2.num, &f2.den);
	f3 = operate(f1, oper, f2);
	printf("%d/%d", f3.num, f3.den);
	return 0;
}