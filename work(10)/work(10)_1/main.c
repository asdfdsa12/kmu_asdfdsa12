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
	insertArrayList(myArrayList, 2, -30);
	insertArrayList(myArrayList, 0, 5);

	printArrayList(myArrayList);

	deleteArrayList(myArrayList, 0);
	deleteArrayList(myArrayList, 1);

	printArrayList(myArrayList);
	
	replaceItemArrayList(myArrayList, 0, 50);
	replaceItemArrayList(myArrayList, 0, -50);
	
	printArrayList(myArrayList);
	
	initArrayList(myArrayList);
	printArrayList(myArrayList);
	
	destroyArrayList(myArrayList);
	
	return 0;
}
