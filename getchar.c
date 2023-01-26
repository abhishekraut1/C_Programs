/*Reading Character Using getchar() & Displaying*/
#include<stdio.h>
void main()
{
 char ch;
 printf("Press any character: ");
 ch = getchar();
 printf("\nPressed character is: %c", ch);
}