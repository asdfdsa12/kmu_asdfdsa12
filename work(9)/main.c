#include <stdio.h>
#include <stdlib.h>
#include "arrayList.h"

int main() {
	arrayList* myArrayList;
	myArrayList = createArrayList(0);

	if (sizeArrayList(myArrayList) == 0) {
		printf("Create ok\n");
	}

	insertArrayList(myArrayList, 0, 10);
	insertArrayList(myArrayList, 1, 20);
	insertArrayList(myArrayList, 2, 30);
	insertArrayList(myArrayList, 0, 5);

	printArrayList(myArrayList);

	printf("%d %d\n", myArrayList->size, myArrayList->capacity);
	destroyArrayList(myArrayList);
	return 0;
}
