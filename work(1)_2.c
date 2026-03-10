#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	printf("입력값: ");
	double a;
	scanf("%lf", &a);
	int b=a;
	if(a<0){
	    printf("%d",1);
	    for(int i=6;i>=0;i--){
	        int q=pow(2,i);
	        if(b/q==-1){
	            printf("%d",0);
	            b/=q;
	        }
	        else
	            printf("%d",1);
	    }
	}
	else{
    	for(int i=7;i>=0;i--){
    	    int q=pow(2,i);
    	    if(b/q==1){
    	        printf("%d",1);
    	        b/=q;
    	    }
    	    else
    	        printf("%d",0);
        }
	}
    return 0;
}
