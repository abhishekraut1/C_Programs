#include<stdio.h>
void main()
{ //WAP to find sum and average of 5 nos.
 int a[5],i,sum;
 float avg;
printf("Enter 10 numbers: \n");
for(i=0;i<5;i++)
 {
  scanf("%d/t",&a[i]);
 }
for(i=0;i<5;i++)
 {
  sum=sum+a[i];
 }
printf("Sum of above numbers: %d\n",sum);
 avg=sum/5;
printf("Average: %f",avg);
}