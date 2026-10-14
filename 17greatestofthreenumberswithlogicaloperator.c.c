#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the values of a ,b andc:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&b>c){
        printf("a is the greatest number :%d",a);
    }
    else if(b>a&&a>c){
        printf("b is the greatest:%d",b);


    }
    else{
        printf("c is the greatest:%d",c);

    }
    return 0;
}
