#include <stdio.h>

int main() {
    int num, tamp=0, q, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    tamp = num;
    while (num!= 0) {
        q = num % 10;
        sum = q+ sum*10;
        num= num/10;
    }

    if (tamp == sum)
        printf("Pallindrome\n");
    else
        printf("Not Pallindrome\n");

    return 0;
}

