#include<stdio.h>
int main(){
    float n,b=1;
    printf("Enter a number:");
    scanf("%f",&n);
    float a=1;
    for(int i=1;i<=n;i=i+1){
        
        a=a*i;
        b=1/a;

    printf("%f ",b);

    }
    return 0;

}