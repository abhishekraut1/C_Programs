#include<stdio.h>
main()
{
  char dept;
  printf("ENTER THE DEPARTMENT\n");
  scanf("%c",&dept);
  switch(dept)
  {
  case'C':printf("COMPUTER SCIENCE AND ENGINEERING");
  break;
  case'E':printf("ELECTRICAL ENGINEERING");
  break;
  case'M':printf("MECHANICAL ENGINEERING");
  break;
  case'I':printf("INFORMATION TECHNOLOGY");
  break;
  default:printf("INVALID OPTION");
  }
  }