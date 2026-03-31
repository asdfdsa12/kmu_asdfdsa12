#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int n;
	int sum = 0;
	int max = 0;
	int min = 0;
	int* q;

	scanf("%d", &n);

	q = (int*)malloc(sizeof(int) * n);

	srand(time(NULL));

	printf("\n처음에서 끝:\n");

	for (int i = 0; i < n; i++) {
		q[i] = rand()%(n+1);
		printf("%d ", q[i]);
		sum += q[i];
		if (q[i] > max)
			max = q[i];
	}

	printf("\n\n끝에서 처음:\n");

	min = *q;

	for (int i = n-1; i >= 0; i--) {
		printf("%d ", q[i]);
		if (min > q[i])
			min = q[i];
	}

	printf("\n\n총합: %d, 최대값: %d, 최소값: %d", sum,max,min);
	free(q);
}
