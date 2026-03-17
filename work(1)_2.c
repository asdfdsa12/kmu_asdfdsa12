#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(){
    printf("입력값: ");
    double a;
    scanf("%lf",&a);
    int q=a*pow(2,8);
    for(int i=15;i>=0;i--){
        if((q>>i)&1)
            printf("1");
        else
            printf("0");
        if(i==8)
            printf(".");
    }
    return 0;
}
