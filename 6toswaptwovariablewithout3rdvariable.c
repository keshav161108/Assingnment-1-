#include<stdio.h>
int main(){
    int a,b;//PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE.
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("\nBefore SWAP THE VALUE OF a is:%d",a);
    printf("\nBefore SWAP THE VALUE OF b is:%d",b);
    a=a+b;//let suppose a=10 and b=20 then a=30
    b=a-b;//here a=30 so 30-20 =b that is 10 ,which is a value;
    a=a-b;//now b=10 and a was30 so new value of a is 30-10=20 which was the value of b before
    printf("\nAFTER SWAP THE VALUE OF a is:%d",a);
    printf("\nAFTER SWAP THE VALUE OF b is:%d",b);
 return 0;
}