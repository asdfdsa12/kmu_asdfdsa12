#include <stdio.h>

int main() {
    char a[100];
    gets_s(a, sizeof(a));
    int i = 0;
    while (1) {
        if (a[i] >= 97 && a[i] <= 122)
            printf("%c", a[i] - 32);
        else if (a[i] >= 65 && a[i] <= 90)
            printf("%c", a[i] + 32);
        else
            printf("%c", a[i]);
        i++;
        if (a[i] == '\0')
            break;
    }
    return 0;
}
