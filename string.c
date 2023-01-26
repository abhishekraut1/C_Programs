#include<stdio.h>
#include<string.h>
int main()
{
char Str[50];
int i;
printf("Enter the String: ");
scanf("%s", Str);
printf("Length of Str is %ld", strlen(Str));
return 0;
}