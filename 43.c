#include <stdio.h>
int main() {
    float s, c;
    scanf("%f", &s);

    if (s <= 500)
        c = s * 0.05;
    else if (s <= 2000)
        c = 35 + (s - 500) * 0.10;
    else if (s <= 5000)
        c = 185 + (s - 2000) * 0.12;
    else
        c = s * 0.125;

    printf("Commission = %.2f", c);
    return 0;
}
