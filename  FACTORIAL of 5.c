#include <stdio.h>
void main()
{
  int i,f=1;
  for(i=1;i<=5;i++)
  {
  f = (f*=i);
  }
  printf("factoial of 5 is %d",f);
  }