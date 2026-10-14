#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    printf("Ascii value of charec ter is:%d",ch);
if(ch>=97&&ch<=122){
    printf("The Charecter is a Small LETTER");
}
if(ch>=65&&ch<=90){
    printf("the charecter is capital letter");
}
if(ch>=48&&ch<=57){
    printf("the charecter is a digit or number");
}
    return 0;
}