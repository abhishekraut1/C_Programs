#include<stdio.h>
int main()
{
 struct book
 {
 char name[20];
 float price;
 int pages;
 };
 struct book b1={"COMPUTER",450.50,400};
 printf("The initialized value of Book is:\n");
 printf("Book name=%s Book price=%f Book pages=%d",b1.name,b1.price,b1.pages);
 }