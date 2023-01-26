#include<stdio.h>
void swap(int*,int*);
main()
{
int a=100,b=200;
printf("Before swap values of a=%d and b=%d \n",a,b);
swap(&a,&b);
printf("After swap values of a=%d and b=%d \n",a,b);
}
void swap(int*x, int*y)
{
int temp=*x;
*x=*y;
*y=temp;
}