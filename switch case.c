#include<stdio.h>
int main(){
int DAY;
printf("Enter the choise for day");
scanf("%d",&DAY);
switch(DAY)
{case '1': printf("MONDAY");
break;
case '6':printf("SATURDAY");
break;
default: printf("SUNDAY");
}
}