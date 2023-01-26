#include <stdio.h>
int add(int,int); //1 devlaration of user defined function
int sub(int,int);
float div(float,int);
float mul(float,float);
void main()
{ 
  int a=17,b=4,c,d;
  float p,q;
  c=add(a,b);  //2 call by functin
  d=sub(9,5);
  p=div(24.45,8);
  q=mul(72.2,2.4);
  printf("add=%d\nsub=%d\ndiv=%f\nmul=%f",c,d,p,q);
  }
  int add(int l,int m) //3 Head of function
  {
  int n;  //4 Defination of function
  n=l+m;
  return n;
  }
  int sub(int e,int f)
  {
    int g;
    g=e+f; 
    return g;
   }
   float div(float h,int i)
   {
     float j;
     j=h+i;
     return j;
    }
    float mul(float k,float x)
    {
      float  y;
      y=k+x;
      return y;
     }
  