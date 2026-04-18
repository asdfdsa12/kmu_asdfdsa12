#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sparseMatrix.h"

int main() {
	srand(time(NULL));
	sparseMatrix* sm = createSparseMatrix(10, 10);
	int r = 0;
	for (int i = 0;i < 20;i++) {
		
		if (i % 2 == 0) {
			r = rand() % 10;
		}
		sm->list->al[i] = (arrayElemental){ i/2,i%2,rand() % 9 + 1 };
		sm->list->size++;
	}
	printArrayList(sm);
	sparseMatrix* tsm = transposeMatrix(sm);
	printArrayList(tsm);
}