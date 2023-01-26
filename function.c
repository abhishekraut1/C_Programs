#include<stdio.h>
int greatestNum(int a, int b,int c)
{
int largest=0;
if(a>b && a> c)
 printf("greatest number is %d",a);
else if(b>a && b>c)
 printf("greatest number is %d",b);
 else 
 printf(" greatest number is %d",c);
}
int main()
{ 
int greatestNum(int ,int ,int );
int x,y,z;
printf("enter the values of x ,y and z\n");
scanf("%d%d%d",&x,&y,&z);
 greatestNum(x,y,z);
 return 0;
}