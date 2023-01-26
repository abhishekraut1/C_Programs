#include<stdio.h>
#include<conio.h>
int main()
{
int p,r,t;float si;
printf("Input principle,Rate of interest & time to find simple interest: \n");
scanf("%d%d%d",&p,&r,&t);
si=(p*r*t)/100;
printf("Simple interest = %f",si);
return 0;
}