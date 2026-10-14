#include<stdio.h>
int main(){
    int n,o=0,e=0;
    printf("Enter the number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i%2!=0){
         o =i+o;
        }
        if(i%2==0){
         e =i+e;
        }
    }
    printf("Sum of even no.s is :%d\n",e);
    printf("Sum of odd no.s is :%d",o);
    return 0;


}