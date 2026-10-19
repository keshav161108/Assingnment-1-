#include<stdio.h>
int main(){
    int n,b =1,a =1;
    printf("Enter no. of terms");
    scanf("%d",&n);
    int sum =1;
    for(int i=1;i<=n-2;i++){
        sum =a+b;
        a=b;
        b=sum;
    }
    printf("%d",sum);
    return 0;
}