#include<stdio.h>
void main()
{
 char a[30];
 int i,n,roll;
 float mark;
 printf("Enter the count of students to print\ntheir Name,Roll no,Marks: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\n\nEnter Name of student %d: ",i+1);
  scanf("%s",a);
  printf("Enter the Roll no of student %d: ",i+1);
  scanf("%d",&roll);
  printf("Enter the marks no of student %d: ",i+1);
  scanf("%f",&mark);
 }
 printf("Name of student %d is %s\n roll no is %d\n marks is %f",i+1,a,roll,mark);
}