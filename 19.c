#include <stdio.h>
int main() {
    char ch;
    scanf("%c", &ch);
    (ch >= 'a' && ch <= 'z') ?
        printf("Small letter") : printf("Not small letter");
    return 0;
}