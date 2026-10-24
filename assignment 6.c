#include<stdio.h>
void main()
{
int id,pass;
printf("please enter your  user ID:  ");
scanf("%d",&id);
if(id!=101)
printf("user not found");
else{
printf("please enter your password: ");
scanf("%d",&pass);
if (pass!=4321)
   printf("Incorrect Password");
else
   printf("Login Successful");   
}
}