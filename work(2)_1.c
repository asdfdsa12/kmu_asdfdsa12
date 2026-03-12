#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    double a,p;
    scanf("%lf",&a);
    if(a==0){
        printf("0/0000 0000/0000 0000 0000 0000 0000 000");
        return 0;
    }
    int b=abs(a);
    int exponent=0;
    if(b!=0){
        while(b!=1){
            b=b>>1;
            exponent++;
        }
    }
    else{
        if(a<0)
            p=-a;
        else
            p=a;
        while(p<1){
            p*=2;
            exponent--;
        }
    }
    int bias=exponent+127;
    if(a<0){
        printf("1/");
        a=-a;
    }
    else
        printf("0/");
    for(int i=7;i>=0;i--){
        if((bias>>i)&1)
            printf("1");
        else
            printf("0");
        if(i==4)
            printf(" ");
    }
    int e=a*pow(2,23);
    printf("/");
    int f=0;
    for(int i=22;i>=0;i--){
        f++;
        if((e>>i+exponent)&1)
            printf("1");
        else
            printf("0");
        if(f==4){
            printf(" ");
            f=0;
        }
    }
    return 0;
}
