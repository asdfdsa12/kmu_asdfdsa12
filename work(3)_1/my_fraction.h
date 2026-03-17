#pragma once

typedef struct {
	int num;
	int den;
} ADT;

int gcd(int a, int b);
ADT sim(ADT f);
ADT operate(ADT f1, char oper, ADT f2);