#include<stdio.h>//EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C PROGRAM TO CONVERT THIS INTO
//NUMBER OF DAY,HOURS AND MINUTES
int main(){
      long long Days,Hours,minutes,seconds;
      seconds=31558150;
      Days=31558150/86400;
      long long remainingsceconds=31558150%86400;//modulo finds the remaining secondsor the remainder
      Hours=remainingsceconds/3600;
      long long remaining_seconds=remainingsceconds%3600;
      minutes =remaining_seconds/60;
      printf("%lld",Days);
      printf("\n%lld",Hours);
      printf("\n%lld",minutes);
      return 0;
}