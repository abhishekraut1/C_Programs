#include<stdio.h> 
int main()
{
int marks=75;
printf("Enter the marks of students \n");
scanf("%d",&marks);
if(marks>=75&&marks<=100) 
{
 printf("Student is passed with Distinction");
}
else if(marks>=60&&marks<75)
{
 printf("Student is passed with Second Division");
}
else if(marks>=40&&marks<60)
{
printf("Student is passed with Third Division");
}
else
{
printf("Student is fail"); 
}
}