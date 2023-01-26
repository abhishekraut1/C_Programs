#include <stdio.h>
void main()
{
  int i,f=1,a;
  printf("Enter the no.: ");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
  f = (f*=i);
  }
  printf("factoial of 5 is %d",f);
  }