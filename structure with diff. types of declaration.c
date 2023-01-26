#include <stdio.h>
void main() //struct is a collection of variables 
            //of different data type.
{
  struct student
  {
    char name[30];
    int roll;
    float mark;
   };            //SEMICOLON AFTER CURLY BRACES
    struct student b={"ABHI",26,81.23};
    struct student c={"Pawan",30,82.34};
   printf("\nName of student is %s having Roll no %d\nand marks is %f",b.name,b.roll,b.mark);
   printf("\n\nName of student is %s having Roll no %d\nand marks is %f",c.name,c.roll,c.mark);
 }
 
 
   THERE ARE FOUR TYPES OF DECLARING STRUCT VARIABLS
   1st = It is given is above Program.
   ------------------------------------------------
   2nd =
    #include <stdio.h>
    void main()             
  {
   struct student
  {
    char name[30];
    int roll;
    float mark;
   }                  //NO SEMICOLON
    b={"ABHI",26,81.23},c={"Pawan",30,82.34};
   printf("\nName of student is %s having Roll no %d\nand marks is %f",b.name,b.roll,b.mark);
   printf("\n\nName of student is %s having Roll no %d\nand marks is %f",c.name,c.roll,c.mark);
 }
    ------------------------------------------------
    3rd =
      
     #include <stdio.h>
     void main()
     {
     struct student
     {
       char name[30];
       int roll;
       float mark;
     };              //SEMICOLON
     struct student b={.name="abhi"};
     struct student c={.name="abhi"};
   
     b.roll=23;
     b.mark=77;
     
     c.roll=23;
     c.mark=77;
     
     
     printf("\nName of student is %s having Roll no %d\nand marks is %f",b.name,b.roll,b.mark);
   }
  ------------------------------------------------
  4th =
    #include <stdio.h>
     void main()
     {
     struct student
     {
       char name[30];
       int roll;
       float mark;
     }                //NO SEMICOLON
     b={.name="abhi"},c={.name="abhi"};
     b.roll=23;
     b.mark=77;
     
     c.roll=23;
     c.mark=77;
     
     printf("\nName of student is %s having Roll no %d\nand marks is %f",b.name,b.roll,b.mark);
     printf("\nName of student is %s having Roll no %d\nand marks is %f",c.name,c.roll,c.mark);
  }
  
  