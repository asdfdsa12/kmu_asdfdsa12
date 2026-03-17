#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

union IEEE{
    float a;
    unsigned int b;
};

int main(){
    union IEEE output;
    scanf("%f",&output.a);
    printf("%d/",(output.b>>31)&1);
    unsigned int expo=(output.b>>23)&0xFF;
    for(int i=7;i>=0;i--){
        printf("%d",(expo>>i)&1);
        if(i==4)
            printf(" ");
    }
    printf("/");
    unsigned int manti=output.b&0x7FFFFF;
    for(int i=22;i>=0;i--){
        printf("%d",(manti>>i)&1);
        if(i%4==3)
            printf(" ");
    }
    return 0;
}
