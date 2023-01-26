#include<stdio.h>
void main()
{  //IN THIS CODE WE CAN ENTER ANY NO. TO 'n'
 int i,n,a[n],max,min;
 printf("Enter number of elements : ");
 scanf("\n%d",&n);
 printf("Enter %d numbers : ",n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
  min=a[0];
  max=a[0];
  for(i=0;i<n;i++)
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