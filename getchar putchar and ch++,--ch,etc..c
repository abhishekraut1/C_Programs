#include <stdio.h>
void main(){
  int ch;
  ch = getchar();
  putchar(++ch);
  printf("\n");
  ch++;
  putchar(ch++);
  printf("\n");
  putchar(ch);
  printf("\n");
  --ch;
  putchar(ch--);
  printf("\n");
  putchar(ch);
  
  
  }