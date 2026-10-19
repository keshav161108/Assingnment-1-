#include<stdio.h>
int main(){
    int n,b;
    printf("Enter the no. of terms");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        b=i*i;
          printf("%d ",b);
    }
  
    return 0;

}

