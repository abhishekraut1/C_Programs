#include<stdio.h>
main()
{
 int c,s=0,n;
 n=15;
 for(c=1;c<=n;c+=2) 
 {
 s+=c; 
 c++;
}
printf("\n Sum is %d",s);
}