#include <stdio.h>

int main() {
    int num, tamp, q, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    tamp = num;
    while (tamp!= 0) {
        q = tamp % 10;
        sum = q* q* q+ sum;
        tamp= tamp/10;
    }

    if (sum == num)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}

