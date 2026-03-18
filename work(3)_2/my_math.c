#include <stdio.h>
#include "my_math.h"

int GCD(int a, int b) {
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int LCM(int a, int b) {
	return a / GCD(a, b) * b;
}