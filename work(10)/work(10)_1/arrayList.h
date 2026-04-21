#include <stdio.h>
#include <stdlib.h>

typedef int elementArrayList;

typedef struct arrayListType {
	elementArrayList* data;
	int size;
	int capacity;
} arrayList;

extern arrayList* createArrayList(int size);
extern void destroyArrayList(arrayList* al);
extern int sizeArrayList(arrayList* al);
extern int insert(arrayList* al,
	int pos, elementArrayList item);
extern elementArrayList delete(
	arrayList* al, int pos);
extern int clear(arrayList* al);
extern int replace(arrayList* al,
	int pos, elementArrayList item);
extern void print(arrayList* al);
