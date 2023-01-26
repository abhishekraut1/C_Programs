#include<stdio.h>
int main() 
{
    int i=0,c[3];
    printf("Enter 3 nos.:\n");
    for (i = 0; i<3; i++)
    {
     scanf("%d", &c[i]);
    }
    printf("Elements of array are \n");
    for (i = 0; i<3; i++)
    {
      printf("%d\t",c[i]);
      }
    }