#include <stdio.h>
#include <stdlib.h>

#include "arrayList.h"

int main() {
	arrayList* myArrayList;
	myArrayList = createArrayList(0);

	if (sizeArrayList(myArrayList) == 0) {
		printf("Create ok\n");
	}

	insert(myArrayList, 0, 10);
	insert(myArrayList, 1, 20);
	insert(myArrayList, 2, -30);
	insert(myArrayList, 0, 5);

	print(myArrayList);

	delete(myArrayList, 0);
	delete(myArrayList, 1);

	print(myArrayList);

	replace(myArrayList, 0, 50);
	replace(myArrayList, 0, -50);

	print(myArrayList);

	clear(myArrayList);
	print(myArrayList);

	destroyArrayList(myArrayList);

	return 0;
}
