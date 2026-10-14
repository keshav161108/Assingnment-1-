#include <stdio.h>

int main() {
    float m, p, c, e, cm;
    printf("Enter Maths marks out of 200: ");
    scanf("%f" ,&m);
     printf("Enter physics marks out of 200: ");
    scanf("%f" ,&p);
     printf("Enter chemistry marks out of 200: ");
    scanf("%f" ,&c);
     printf("Enter Entrance marks out of 100: ");
    scanf("%f" ,&e); 
    cm = (m / 2) + (p / 2) + (c / 2) + e;
    printf("Cut-off Mark: %f\n", cm);
    return 0;
}