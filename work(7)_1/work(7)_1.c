#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct student {
	char name[30];
	int number;
	int score;
};

int main() {
    FILE* name = fopen("name_list.txt", "r");
    if(name==NULL){
        printf("fail to open");
        return 0;
    }
    struct student minst, maxst;
    
	int N,min,max;
	double averageScore=0;
	min=101;
	max=-1;
	scanf("%d", &N);
	
	srand(time(NULL));
	
	struct student* kmu;
	kmu = (struct student*)malloc(N*sizeof(struct student));
	
	char stname[30];
	char namelist[100][30];

	for (int i = 0;i < N;i++) {
		fgets(stname, sizeof(stname), name);
		stname[strlen(stname) - 1] = '\0';
		strcpy(namelist[i], stname);
		memset(stname, 0, sizeof(stname));
	}

	for (int i = 0;i < N;i++) {
		int ran1 = rand() % N;
		int ran2 = rand() % N;
		char temp[30];
		strcpy(temp, namelist[ran1]);
		strcpy(namelist[ran1], namelist[ran2]);
		strcpy(namelist[ran2], temp);
	}
	
	for(int i=0;i<N;i++){
		strcpy(kmu[i].name, namelist[i]);
		kmu[i].number = i+1;
		kmu[i].score = rand() % 100+1;
		
		if(min>kmu[i].score){
		    min=kmu[i].score;
		    minst=kmu[i];
		}
		
		if(max<kmu[i].score){
		    max=kmu[i].score;
		    maxst=kmu[i];
		}
		
		averageScore+=kmu[i].score;
	}
	
	printf("최저점 학생: %s, 학번: %d, 점수:%d\n", minst.name,minst.number,minst.score);
	printf("최고점 학생: %s, 학번: %d, 점수:%d\n", maxst.name,maxst.number,maxst.score);
	printf("평균 점수: %.2lf",averageScore/(double)N);
	
	free(kmu);
	fclose(name);
}
