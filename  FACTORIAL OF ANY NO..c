#include <stdio.h>
void main()
{
  int i=1,f=1;
  printf("Enter no.: ");
  scanf("%d",&i);
  while(i>=1)
  {
  f = (f*i);
  i-=1;
  }
  printf("FACTORIAL: %d",f);
  }