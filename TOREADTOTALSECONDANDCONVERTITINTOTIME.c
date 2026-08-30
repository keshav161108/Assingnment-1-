#include<stdio.h>
int main(){
    long int seconds,hours,minutes;
    printf("Enter total seconds:");
    scanf("%ld",&seconds);
hours = seconds/3600;
long int remaining_seconds=seconds%3600;
minutes =remaining_seconds/60;
printf("Hours is:%ld\n",hours);
printf("Minutes is:%ld",minutes);
return 0;
}