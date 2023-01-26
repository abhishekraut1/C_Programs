#include<stdio.h>
void main()
{
 int i,a[5],max,min;
 printf("Enter 5 numbers : ");
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]);
 }
  min=a[0];
  max=a[0];
  for(i=0;i<5;i++)
 {
  if(a[i]<min)
  { 
    min=a[i];
  }
  if(a[i]>max)
  {
   max=a[i];
  }
 }
  printf("Smallest number is %d\n",min);
  printf("Largest number is %d",max);
}