#include <stdio.h>
#include <stdlib.h>
#include "arrayList.h"

int dataMovement = 0;

AL* createArrayList(int size) {
	AL* arr = (AL*)malloc(sizeof(AL));
	arr->data = (elementArrayList*)malloc(sizeof(elementArrayList) * size);
	arr->size = 0;
	arr->capacity = size;
	return arr;
}

void destroyArrayList(AL* arr) {
	free(arr->data);
	free(arr);
}

int isEmptyArrayList(AL* arr) {
	if (arr->size == 0)
		return 1;
	else
		return 0;
}

int isFullArrayList(AL* arr) {
	if (arr->size == arr->capacity)
		return 1;
	else
		return 0;
}

int sizeArrayList(AL* arr) {
	return arr->size;
}

int insertArrayList(AL* arr, int pos, elementArrayList item) {
	if (pos<0 || pos>arr->size) {
		return 0;
	}
	for (int i = arr->size; i >= pos; i--) {
		arr->data[i + 1] = arr->data[i];
		dataMovement++;
	}
	arr->data[pos] = item;
	arr->size++;
	return 0;
}

elementArrayList deleteArrayList(AL* arr, int pos) {
	if (pos<0 || pos>arr->size-1) {
		return 0;
	}
	elementArrayList item = arr->data[pos];
	for (int i = pos; i < arr->size-1; i++) {
		arr->data[i] = arr->data[i + 1];
		dataMovement++;
	}
	arr->size--;
	return item;
}

void initArrayList(AL* arr) {
	for (int i = arr->size - 1; i >= 0; i--) {
		deleteArrayList(arr, i);
	}
}

elementArrayList getItemArrayList(AL* arr, int pos) {
	return arr->data[pos];
}

int replaceItemArrayList(AL* arr, int pos, elementArrayList item) {
	if (pos<0 || pos>arr->size - 1)
		return 0;
	arr->data[pos] = item;
	return 0;
}

void printArrayList(AL* arr) {
	for (int i = 0; i < arr->size; i++) {
		printf("%d ", arr->data[i]);
	}
	printf("\n");
}