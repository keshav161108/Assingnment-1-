#include <stdio.h>
int main() {
    int n, i, x, max, second;
    scanf("%d", &n);

    if (n < 2) {
        printf("Enter at least 2 numbers");
        return 0;
    }

    scanf("%d%d", &max, &second);
    if (second > max) {
        x = max;
        max = second;
        second = x;
    }

    for (i = 3; i <= n; i++) {
        scanf("%d", &x);
        if (x > max) {
            second = max;
            max = x;
        } else if (x > second) {
            second = x;
        }
    }

    printf("Maximum = %d\nSecond maximum = %d", max, second);
    return 0;
}