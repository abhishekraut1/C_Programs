#include<stdio.h>
void main()
{ //WAP Addition of two matrices
 int a[3][2],b[3][2],c[3][2],i,j;
//for second matrix
printf("Enter 6 numbers of first matrix: ");
for(i=0;i<3;i++)
 {
  for(j=0;j<2;j++)
   {
    scanf("%d",&a[i][j]);
   }
  }
//for second matrix
 printf("Enter 6 numbers of second matrix: ");
 for(i=0;i<3;i++)
 {
  for(j=0;j<2;j++)
   {
    scanf("%d",&b[i][j]);
   }
  }
 for(i=0;i<3;i++)
 {
  for(j=0;j<2;j++)
   {
    c[i][j] = a[i][j] + b[i][j];
   }
 }
printf("Additin of 2 matrices =\n");
  for(i=0;i<3;i++)
 {
  for(j=0;j<2;j++)
 {
   printf("%d\t",c[i][j]);
 }
 printf("\n");
}
}