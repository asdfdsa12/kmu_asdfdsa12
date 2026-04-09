#include <stdio.h>

int fibo(int a) {
	int f1 = 1;
	int f2 = 1;
	if (a <= 2)
		return 1;
	else {
		int f3=0;
		for (int i = 3; i <= a; i++) {
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
		return f3;
	}
}

int main() {
	int n = fibo(10);
	printf("%d", n);
}