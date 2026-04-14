#include <stdio.h>
#include <stdlib.h>

typedef int elementArrayList;

typedef struct arrayListType {
	elementArrayList* data;
	int size;
	int capacity;
} AL;

extern AL* createArrayList(int size);
extern void destroyArrayList(AL* arr);
extern int isEmptyArrayList(AL* arr);
extern int isFullArrayList(AL* arr);
extern int sizeArrayList(AL* arr);
extern int insertArrayList(AL* arr, int pos, elementArrayList item);
extern elementArrayList deleteArrayList(AL* arr, int pos);
extern void initArrayList(AL* arr);
extern elementArrayList getItemArrayList(AL* arr, int pos);
extern int replaceItemArrayList(AL* arr, int pos, elementArrayList item);
extern void printArrayList(AL* arr);