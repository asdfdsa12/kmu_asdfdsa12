#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>
#include <math.h>

int main(){
    double a;
    scanf("%lf",&a);
    int b=a;
    int c=0;
    while(b!=1){
        b=b>>1;
        c++;
    }
    int d=c+127;
    for(int i=8;i>=0;i--){
        if((d>>i)&1)
            printf("1");
        else
            printf("0");
        if(i==8)
            printf("/");
        else if(i==4)
            printf(" ");
    }
    int e=a*pow(2,21-c);
    printf("/");
    int f=0;
    for(int i=22;i>=0;i--){
        f++;
        if((e>>i-c)&1)
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
