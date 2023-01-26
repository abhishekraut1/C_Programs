#include<stdio.h>
void main()
{
  //for int array
  int i[3]={1,2,3}; //declaration & intialization of array
  
  //for char array or string array
  char c[3]={'a','b','c'}; 
          OR
  char c[3]="abc"; 
  char c[]= "abcdefg" //here size of array is automatically found by compiler
  //for string
   char a[3];
  scanf("%s",a); //NO NEED TO GIVE &(address)

  //for float
  float f[3]={2.5,9.0,6.4};
  }