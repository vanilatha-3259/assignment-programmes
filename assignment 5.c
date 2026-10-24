#include<stdio.h>
void main()
{
int age,mi,cs;
printf("enter your age, monthly income and credit score : ");
scanf("%d%d%d",&age,&mi,&cs);
if ((21<age<60)&&(mi>=25000)&&(cs>=700))
    printf("Loan approved");
     
else
    printf("Loan not approved");   


}