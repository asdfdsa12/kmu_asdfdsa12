#include <stdio.h>
#include <stdlib.h>

#include "sparseMatrix.h"

sparseMatrix* createSparseMatrix(int row, int col) {
	sparseMatrix* sm;
	sm = (sparseMatrix*)malloc(sizeof(sparseMatrix));
	sm->row = row;
	sm->col = col;
	sm->list = (arrayList*)malloc(sizeof(arrayList) * row * col);
	sm->list->capacity = row * col;
	sm->list->al = (arrayElemental*)malloc(sizeof(arrayElemental) * sm->list->capacity);
	sm->list->size = 0;
	return sm;
}

void printArrayList(sparseMatrix* sm) {
	printf("\n희소행렬 순차 리스트: ");
	for (int i = 0;i < sm->list->size;i++) {
		printf("(%d %d %d) ", sm->list->al[i].row, sm->list->al[i].col, sm->list->al[i].value);
	}
}

sparseMatrix* transposeMatrix(sparseMatrix* sm) {
	sparseMatrix* sm1=createSparseMatrix(sm->col,sm->row);
	int movement = 0;
	for (int i = 0;i < sm->list->size;i++) {
		sm1->list->al[i].col = sm->list->al[i].row;
		sm1->list->al[i].row = sm->list->al[i].col;
		sm1->list->al[i].value = sm->list->al[i].value;
		sm1->list->size++;
		movement += 3;
	}
	printf("\n\n전치행렬 연산 완료, 데이터 이동 횟수: %d\n",movement);
	return sm1;
}