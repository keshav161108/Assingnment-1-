#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");//checking whether nuber is even or odd using else snd if staement
    scanf("%d",&x);
    if (x%2==0){
        printf("Even number");
    }
    else{
        printf("The number is odd");
    }
    return 0;
    
}