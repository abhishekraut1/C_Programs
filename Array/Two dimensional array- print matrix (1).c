#include<stdio.h>
void main()
{ //WAP to print matrix
 int a[3][2],i,j;
printf("Enter 6 numbers: ");
for(i=0;i<3;i++)//loop for rows
 {
  for(j=0;j<2;j++)//loop for column
   {
    scanf("%d",&a[i][j]);
   }
  }
printf("Matrix is=\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<2;j++)
   {
    printf("%d\t",a[i][j]);
   }
printf("\n");
  }
}