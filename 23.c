#include<stdio.h>
int main(){
    float power,base;
    printf("Enter the power and base");
    scanf("%f%f",&power,&base);
    float b=1;
    if(power>0){
    for(int i=1;i<=power;i++){
        b=b*base;}}
    else{
        for(int i=1;i<=-power;i++){
            b=b*base;
        }
        b=1/b;
    }

    printf("value of power is:%f",b);
    return 0;
}