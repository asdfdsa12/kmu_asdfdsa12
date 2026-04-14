#include <stdio.h>
#include <stdlib.h>
#include "arrayList.h"

int main() {
	AL* arr = createArrayList(100);
	if (sizeArrayList(arr) == 0)
		printf("OK\n");
	insertArrayList(arr, 0, 10);
	insertArrayList(arr, 1, 20);
	insertArrayList(arr, 2, 30);
	insertArrayList(arr, 0, 5);

	printArrayList(arr);
	
	deleteArrayList(arr, 0);
	deleteArrayList(arr, 1);
	deleteArrayList(arr, 2);

	printArrayList(arr);

	destroyArrayList(arr);
}