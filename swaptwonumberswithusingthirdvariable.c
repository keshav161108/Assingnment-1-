#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("\nBefore SWAP THE VALUE OF a is:%d",a);
    printf("\nBefore SWAP THE VALUE OF b is:%d",b);
    c=a;//value of a enters in c
    a=b;//value of b enters in a 
    b=c;//value of c enters in b  we know c=a
    printf("\nAFTER SWAP THE VALUE OF a is:%d",a);
    printf("\nAFTER SWAP THE VALUE OF b is:%d",b);
 return 0;
}
