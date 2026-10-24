#include<stdio.h>
void main()
{
int a,b,ar,pr;
printf("enter the length and bredth: ");
scanf("\n%d%d",&a,&b);
ar=a*b;
pr=2*(a+b);
printf("\nthe area of the rectanglre is %d",ar);
printf("\nthe perimeter of the rectangle is %d",pr);
}