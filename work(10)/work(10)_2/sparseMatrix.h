#include <stdio.h>
#include <stdlib.h>

typedef struct elementArrayListType {
    int row;
    int col;
    int value;
} arrayElemental;

typedef struct arrayList {
    int size;
    int capacity;
    arrayElemental* al;
} arrayList;

typedef struct sparseMatrix {
    int row;
    int col;
    arrayList* list;
} sparseMatrix;

extern sparseMatrix* createSparseMatrix(int row, int col);
extern arrayList* createArrayList(int size);
extern void printArrayList(sparseMatrix* sm);
extern sparseMatrix* transposeMatrix(sparseMatrix* sm);