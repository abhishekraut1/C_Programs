#include <stdio.h>
int main()
{
  int i,sum=0;
  for(i=2;i<=40;i+=2)
  {
  sum=sum+i*i;
  }
  printf("sum=%d",sum);
  }