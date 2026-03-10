#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("입력값: ");
	float a;
	scanf("%f", &a);
	int b=a/1;
	for(int i=8;i>0;i--){
	    if((b>>i)&1==1)
	        printf("%d",1);
	    else
	        printf("%d",0);
	}
	return 0;
}
