#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "my_fraction.h"

int main() {
	ADT f1={0,1}, f2={0,1}, f3;
	char oper;
	char v1[50],v2[50];
	scanf("%s %c %s", v1, &oper, v2);
	f1 = check(v1);
	f2 = check(v2);
	if (f1.den == 0 || f2.den == 0) {
		printf("denominator cannot be 0");
		return 0;
	}
	if (oper != '+' && oper != '-' && oper != '*' && oper != '/') {
		printf("Usage: <num> <oper> <num>");
		return 0;
	}
	f3 = operate(f1, oper, f2);
	if (f3.den == 1)
		printf("%d", f3.num);
	else
		printf("%d/%d", f3.num, f3.den);
	return 0;
}