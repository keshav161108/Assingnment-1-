#include<stdio.h>
int main(){//code to calculate simple interest}
    float P;
    printf("Enter the Pricipal:");
    scanf("%f",&P);
    float R;
    printf("Enter the Rate:");
    scanf("%f",&R);
    float T;
    printf("Enter the Time:");
    scanf("%f",&T);
    float si=(P*R*T)/100;
    printf("The simple interest is:%f",si);
    return 0;
    
}