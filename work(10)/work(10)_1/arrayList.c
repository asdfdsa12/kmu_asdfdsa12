#include <stdio.h>
#include <stdlib.h>

#include "arrayList.h"

arrayList* createArrayList(int size) {
	arrayList* al;
	al = (arrayList*)malloc(sizeof(arrayList));

	al->data = (elementArrayList*)malloc(
		sizeof(elementArrayList) * size);
	al->size = 0;
	al->capacity = size;

	return al;
}

void destroyArrayList(arrayList* al) {
	free(al->data);
	free(al);
}

int sizeArrayList(arrayList* al) {
	return al->size;
}

int insert(arrayList* al,
	int pos, elementArrayList item) {
	if (item <= 0)
		return 0;
	if (al->size == al->capacity) {
		al->data = (elementArrayList*)realloc(al->data, sizeof(elementArrayList) * (al->size + 1));
		al->capacity++;
	}
	if (pos < 0 || pos > al->size) {
		return 0;
	}

	for (int i = al->size; i >= pos; i--) {
		al->data[i] = al->data[i - 1];
	}

	al->data[pos] = item;
	al->size++;

	return 1;
}

elementArrayList delete(
	arrayList* al, int pos) {
	if (pos < 0 || pos > al->size - 1) {
		return 0;
	}

	elementArrayList item = al->data[pos];

	for (int i = pos; i < al->size - 1; i++) {
		al->data[i] = al->data[i + 1];
	}

	al->size--;

	return item;
}

int clear(arrayList* al) {
	for (int i = al->size - 1; i >= 0; i--) {
		delete(al, i);
	}
	return 1;
}

int replace(arrayList* al,
	int pos, elementArrayList item) {
	if (item <= 0)
		return 0;
	if (pos < 0 || pos > al->size - 1) {
		return 0;
	}

	al->data[pos] = item;

	return 1;
}

void print(arrayList* al) {
	printf("순차 리스트: ");

	for (int i = 0; i < al->size; i++) {
		printf("%d ", al->data[i]);
	}
	printf("\n");
}
