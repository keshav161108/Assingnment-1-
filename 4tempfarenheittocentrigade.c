#include<stdio.h>
int main(){//program to convert farenheit to centigrade
    float F;
    printf("Enter the temp in farehight:");
    scanf("%f",&F);
    float c;
    printf("\nThe temp in centrigade is:%f",(F-32)*(5.0/9.0));
    return 0;
}