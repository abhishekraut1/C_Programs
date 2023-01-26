#include <stdio.h>
void main()
{
  int i=1,f=1;
  printf("Enter no.: ");
  scanf("%d",&i);
  do
  {
    f=(f*i);
    i-=1;
   }
   while(i>=1);
   printf("Factorial: %d",f);
   }