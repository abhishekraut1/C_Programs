#include <stdio.h>
void main()
{
  int a=17;
  int *ptr=&a;
  printf("Address of a: %p\n",&a);
  printf("Address of a: %p\n",ptr);
  printf("Address of ptr: %p\n",&ptr);
  printf("Value of a: %d\n",a);
  printf("Address of a: %d",*ptr);
 }