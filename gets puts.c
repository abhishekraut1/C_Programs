#include<stdio.h>

void main()
{
char name [100];
printf("Enter your name: \n");
gets(name);
puts("Hello, ");
puts(name);
puts("Have a good day.");
}