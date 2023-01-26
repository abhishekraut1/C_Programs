#include<stdio.h>
int main()
{
  int i=2,sum=0;
  do
  {
  if(i%2==0)
  {
  sum=sum+i*i;
  i+=2;
  }
  }
  while(i<=40);
  printf("sum=%d",sum);
  }