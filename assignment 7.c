#include<stdio.h>
void main()
{
int marks;
printf("please enter your  marks:  ");
scanf("%d",&marks);


if ((100>=marks)&&(marks>=90)){
   printf(" your result is : O");}
else if((80<=marks)&&(marks<90)){
   printf("your result is : A+");}
else if((70<=marks)&&(marks<=79)){
   printf("your result is : A");}
else if((60<=marks)&&(marks<=69)){
   printf("your result is : B");}
else if((50<=marks)&&(marks<=59)){
   printf("your result is : C");}
else if((0<=marks)&&(marks<50)){
   printf("you failed");}
else{
   printf("invalid marks");}
}