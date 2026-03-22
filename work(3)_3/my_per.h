#pragma once

typedef struct {
	int num;
	int den;
} ADT;

int gcd(int a, int b);
ADT sim(ADT f);
ADT check(char* v);