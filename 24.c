#include <stdio.h>

int main() {
    float x, y;
    int n;
    printf("Enter the value of x: ");
    scanf("%f", &x);  
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n == 1) {
        y = 1 + x;
    } 
    else if (n == 2) {
        y = 1 + (x / n);
    } 
    else if (n == 3) {
        y = 1 + (x * n); 
    } 
    else {
        y = 1 + (n * x);
    }
    printf("The value of Y(%f, %d) is:%f ", x, n, y);

    return 0;
}
