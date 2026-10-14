#include<stdio.h>
int main(){
    int n;
    printf("Enter a number that you need to print the table ");
    scanf("%d",&n);
    int a;
    for(int i=1;i<=10;i++){
        a=i*n;
        printf("%d ",a);
        
    }

}

