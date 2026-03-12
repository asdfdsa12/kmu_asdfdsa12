#include <stdio.h>

int main() {
    char a[100];
    fgets(a,sizeof(a),stdin); //VS에서는 gets_s(a,sizeof(a)); 가능
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
