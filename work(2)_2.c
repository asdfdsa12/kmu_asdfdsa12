#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    scanf("%s",a);
    int i=0;
    while(1){
        if(a[i]>=97)
            printf("%c",a[i]-32);
        else
            printf("%c",a[i]+32);
        i++;
        if(a[i]=='\0')
            break;
    }
    return 0;
}
