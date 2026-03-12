#include <stdio.h>

int main() {
    char a[100];
    scanf("%[^\n]",a);
    int i=0;
    while(1){
        if(a[i]>=97)
            printf("%c",a[i]-32);
        else if(a[i]>=65)
            printf("%c",a[i]+32);
        else
            printf("%c",a[i]);
        i++;
        if(a[i]=='\0')
            break;
    }
    return 0;
}
