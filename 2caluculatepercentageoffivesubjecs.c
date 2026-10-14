#include<stdio.h>
int main(){
    float m;
    printf("enter marks of maths:");
    scanf("%f",&m);
    float e;
    printf("\nenter the marks of english:");
    scanf("%f",&e);
    float p;
    printf("\nenter the marks of physics:");
    scanf("%f",&p);
    float c;
    printf("\nenter the marks of chemistry:");
    scanf("%f",&c);
    float h;
    printf("\nenter the marks of hindi:");
    scanf("%f",&h);
    float TotalPercentage=(m+e+p+c+h)/5;
    printf("\nThe total marks is:%f",m+e+p+c+h);
    printf("\nThe percentage is:%f",TotalPercentage);
    return 0;
}