#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int a) {
	if (a <= 1)
		return a;
	return fib(a - 1) + fib(a - 2);
}

int main() {
	for (int N=1;;N++) {
		int q = fib(N);
	}
	return 0;
}
