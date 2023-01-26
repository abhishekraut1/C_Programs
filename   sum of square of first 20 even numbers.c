#include <stdio.h>
int main()
{
  int i,sum=0;
  for(i=2;i<=40;i++)
  {
    if(i%2==0)
    {
  sum=sum+i*i;
  }
  }
  printf("SUM=%d",sum);
  }