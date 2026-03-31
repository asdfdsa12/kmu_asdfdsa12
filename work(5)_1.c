#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

int main() {
	int sum = 0;
	int max = 0;
	int q[N];
	int min = N;

	srand(time(NULL));

	printf("처음에서 끝:\n");

	for (int i = 0; i < N; i++) {
		q[i] = rand()%(N+1);
		printf("%d ", q[i]);
		sum += q[i];
		if (q[i] > max)
			max = q[i];
		if (q[i] < min)
		    min = q[i];
	}

	printf("\n\n끝에서 처음:\n");

	for (int i = N-1; i >= 0; i--) {
		printf("%d ", q[i]);
	}

	printf("\n\n총합: %d, 최대값: %d, 최소값: %d", sum,max,min);
}
