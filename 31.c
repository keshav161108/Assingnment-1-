#include <stdio.h>

int main() {
    int num, remainder, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &num);
    while (num > 0) {
        remainder = num % 10;  // 1. Get the last digit
        sum = sum + remainder; // 2. Add the digit to sum
        num = num / 10;        // 3. Remove the last digit from the number
    }

    // Print the final result
    printf("Sum of individual digits = %d\n", sum);

    return 0;
}
