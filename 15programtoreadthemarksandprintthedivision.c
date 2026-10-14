#include<stdio.h>
int main(){
    float m;
    printf("enter marks of maths:");
    scanf("%f",&m);
    float e;
    printf("\nenter the marks of english:");
    scanf("%f",&e);
    float p;
    printf("\nenter the marks of physics:");
    scanf("%f",&p);
    float c;
    printf("\nenter the marks of chemistry:");
    scanf("%f",&c);
    float h;
    printf("\nenter the marks of hindi:");
    scanf("%f",&h);
 if(m>=90&&m<=100){
    printf("\nAcheived A grades in maths passed the exam");
   
 }
 if(m>=80&&m<90){
    printf("\nAcheived B grades in maths and passed the exam");
 }
 if(m>=70&&m<80){
    printf("\nAcheived C grade in maths and passed the exam");
 }
 if(m>=60&&m<70){
    printf("\nAcheived D  grade in maths and passed the exam");
 }
 if(m<60){
    printf("\nFailed the  maths exam");
 }
 if(e>=90&&e<=100){
    printf("\nAcheived A grades in english passed the exam");
   
 }
 if(e>=80&&e<90){
    printf("\nAcheived B grades in english and passed the exam");
 }
 if(e>=70&&e<80){
    printf("\nAcheived C grade in english and passed the exam");
 }
 if(e>=60&&e<70){
    printf("\nAcheived D  grade in english and passed the exam");
 }
 if(e<60){
    printf("\nFailed the english exam");
 }
 if(p>=90&&p<=100){
    printf("\nAcheived A grades in physucs passed the exam");
   
 }
 if(p>=80&&p<90){
    printf("\nAcheived B grades in physics and passed the exam");
 }
 if(p>=70&&p<80){
    printf("\nAcheived C grade in physics and passed the exam");
 }
 if(p>=60&&p<70){
    printf("\nAcheived D  grade in physics and passed the exam");
 }
 if(p<60){
    printf("\nFailed the  physics exam");
 }
 if(c>=90&&c<=100){
    printf("\nAcheived A grades in chemistry passed the exam");
   
 }
 if(c>=80&&c<90){
    printf("\nAcheived B grades in chemistry and passed the exam");
 }
 if(c>=70&&c<80){
    printf("\nAcheived C grade in chemistry and passed the exam");
 }
 if(c>=60&&c<70){
    printf("\nAcheived D  grade in chemistry and passed the exam");
 }
 if(c<60){
    printf("\nFailed the chemistry exam");
 }
 if(h>=90&&h<=100){
    printf("\nAcheived A grades in hindi passed the exam");
   
 }
 if(h>=80&&h<90){
    printf("\nAcheived B grades in hindi and passed the exam");
 }
 if(h>=70&&h<80){
    printf("\nAcheived C grade in hindi and passed the exam");
 }
 if(h>=60&&h<70){
    printf("\nAcheived D  grade in hindi and passed the exam");
 }
 if(h<60){
    printf("\nFailed the hindi exam");
 }
 return 0;
}