#include <stdio.h>
void main()
{
  int i=1,f=1;
  while(i<=5)
  {
  f = (f*i);
  i+=1;
  }
  printf("Factorial of 5 is %d",f);
  }