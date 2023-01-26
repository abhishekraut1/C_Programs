#include<stdio.h>
main()
{
  char operator_;
  printf("ENTER THE OPERATOR \n");
  scanf("%c",&operator_);
  switch(operator_)
  { 
  case'+':printf("a+b");
  break;
  case'-':printf("a-b");
  break;
  case'/':printf("a/b");
  break;
  case'*':printf("a*b");
  break;
  case'%':printf("a%b");
  break;
  default:printf("INVALID OPERATOR");
  }
  }