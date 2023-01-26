#include<stdio.h>
main()
{
char colour;
printf("Enter the character:\n");
scanf("%c",&colour);
switch(colour)
{
case 'v':
case 'V':printf("VIOLET");
break;
case 'r':
case 'R':printf("RED");
break;
case 'b':
case 'B':printf("BLUE");
break;
case 'o':
case 'O':printf("ORANGE");
break;
default:printf("INVALID OPTION");
}
}