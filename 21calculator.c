#include<stdio.h>
int main(){
    char op;
    printf("Enter the operator(+,-,*,/):");
    scanf("%c",&op);
    float a,b;
    printf("Enter the operands:");
    scanf("%f%f",&a,&b);
    switch (op)
    {
    case '+' : printf("SUM OF a and b :%f",a+b);
        break;
    case '/' : printf("divison OF a and b :%f",a/b);
        break;
    case '*' : printf("multiplication OF a and b :%f",a*b);
        break;
    case '-' : printf("subratctipon OF a and b :%f",a-b);
        break;
    
    default:printf("error in opeartor");
        break;
    }

return 0;

}