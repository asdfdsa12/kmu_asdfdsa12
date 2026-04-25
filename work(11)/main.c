#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#include "polynomial.h"

int main() {
	polynomial* p1 = createPolynomial(100);
	int co, ex;
	char plus;
	while (1) {
		scanf("%dX^%d%c", &co, &ex, &plus);
		addItemPolynomial(p1, (elementType) { co, ex });
		if (plus != '+')
			break;
	}

	printPolynomial(p1);

	polynomial* p2 = createPolynomial(100);

	while (1) {
		scanf("%dX^%d%c", &co, &ex, &plus);
		addItemPolynomial(p2, (elementType) { co, ex });
		if (plus != '+')
			break;
	}

	printPolynomial(p2);

	polynomial* p3 = timePolynomial(p1, p2);

	printPolynomial(p3);
}