#include<stdio.h>
void main()
{ //WAP to find number from array
 int i,a[6],n,found=0;
 printf("Enter the numbers: ");
 for(i=0;i<6;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter no. to search: ");
  scanf("%d",&n);
  for(i=0;i<6;i++)
  {
     if(a[i]==n)
    {
      found=1;
      break;
    }
  }
  if(found==1)
  printf("Found no. is at position: %d",i+1);
  else
  printf("Number not found");
 }


