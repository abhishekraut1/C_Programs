#include<stdio.h>
void main()
{
int sum=0,i;
i=2;
while(i<=40)
{
if(i%2==0)
{
sum=sum+(i*i*i);
i++;
}
}
printf("suM of cube of even numbers is:%d",sum);
}