#include<stdio.h>
int main(){
    float b,h;
    printf("enter the value of base:");
    scanf("%f",&b);
    printf("\nenter the value of height:");
    scanf("%f",&h);
    float area=(b*h)/2;
    printf("The area of triangle is:%f",area);
    return 0;
}