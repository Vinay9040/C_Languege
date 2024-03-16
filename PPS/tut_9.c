/*Write a program to read marks of a student from keyboard whether the student is pass or fail(using if else)*/

#include<stdio.h>

int main()
{
 int marks;
 printf("\n Enter Marks from 0-70 :");
 scanf("%d",&marks);
 if(marks<23)
 {
  printf("\n Sorry ..! You are Fail");
 }
 else
 {
  printf("\nCongratulation ...! You are Pass");
 }
 return 0;
}