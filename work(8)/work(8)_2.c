#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int a) {
	if (a <= 1)
		return a;
	return fib(a - 1) + fib(a - 2);
}

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		int q = fib(N);
	}
	return 0;
}
