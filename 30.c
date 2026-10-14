#include <stdio.h>

int main() {
    int num, q, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);


    while (num!= 0) {
        q = num % 10;
        sum = q+ sum*10;
        num= num/10;
    }
printf("reverse is=%d",sum);
return 0;
}