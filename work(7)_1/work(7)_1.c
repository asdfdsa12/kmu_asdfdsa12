#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	char name[30];
	int number;
	int score;
};

int main() {
	FILE* name = fopen("name_list.txt", "r");
	int N;
	scanf("%d", &N);
	struct student* kmu;
	kmu = (struct student*)malloc(N*sizeof(struct student));
	char stname[30];
	for(int i=0;i<N;i++){
		fgets(stname, sizeof(stname), name);
		strcpy(kmu[i].name, stname);
		memset(stname, 0, sizeof(stname));
		kmu[i].number = rand() % N;
		kmu[i].score = rand() % 101;
		printf("%s %d %d\n", kmu[i].name, kmu[i].number, kmu[i].score);
	}
	fclose(name);
}