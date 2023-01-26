#include<stdio.h>
void main()
{ //WAP Transpose of matrix
 int a[3][2],b[2][3],i,j; char temp;
printf("Enter 6 nos of A matrix:\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<2;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
printf("A matrix:\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<2;j++)
  {
   printf("%d\t",a[i][j]);
  }
 printf("\n");
 }
 printf("Transpose of A :\n");
  for(i=0;i<2;i++)//NOTE: here 3 & 2 interchange
 {
  for(j=0;j<3;j++)
  {
   printf("%d\t",a[j][i]);
  }
 printf("\n");
 }
}