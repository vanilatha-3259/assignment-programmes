#include<stdio.h>
#include<math.h>
void main()
{
float h,w,bmi;
printf("enter your height  and weight: ");
scanf("%2f%2f",&h,&w);
bmi=w/(h*h) ;
printf("your bmi is %2f",bmi);
if (bmi<18.5 )
printf("underweight");
else if(18.5<=bmi<25)
printf("normal");
else if(25<=bmi<30)
printf("normal");
else if(bmi>=30)
printf("obese");
}