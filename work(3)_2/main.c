#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "my_math.h"

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a == 0 && b == 0) {
		printf("please use another number");
		return 0;
	}
	a = abs(a);
	b = abs(b);
	printf("GCD: %d, LCM: %d", GCD(a, b), LCM(a, b));
	return 0;
}