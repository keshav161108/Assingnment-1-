#include <stdio.h>

int main() {
    int a,c, b,max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max = (a > b) ? ((a> c) ? a : c) : (( b>c) ? b :c);  // Printing the maximum number
    printf("The maximum number is: %d\n", max);

    return 0;
}