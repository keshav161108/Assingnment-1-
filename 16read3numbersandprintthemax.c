#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the values of a ,b andc:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("a is the greatest");
        }
    }
     if(b>a){
        if(b>c){
            printf("b is the greatest");
        }
    }
     if(c>a){
        if(c>b){
            printf("c is the greatest");
        }
    }
    return 0;
}
