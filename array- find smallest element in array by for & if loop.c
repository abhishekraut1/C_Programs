#include<stdio.h>
void main()
{
  int no[5],i,min;
printf("Enter 5 numbers : ");
for(i=0;i<5;i++)
{
 scanf("%d",&no[i]);
}
min=no[0];
for(i=0;i<5;i++)
{
 if(min > no[i])
{
 min = no[i];
}
}
printf("Smallest no. is %d",min);
}