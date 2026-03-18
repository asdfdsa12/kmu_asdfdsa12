#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "my_math.h"

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("GCD: %d, LCM: %d", GCD(a, b), LCM(a, b));
	return 0;
}