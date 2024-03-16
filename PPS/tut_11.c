/*Write a C program to check whether the entered character is capital, small letter, digit or any special character.*/

#include<stdio.h>

int main()
{
char ch;
printf("enter your charater : ") ;
scanf("%c",&ch) ;
if(ch>='A'&&ch<='Z')
{
printf("your charecter is capital letter") ;
}
else if(ch>='a'&&ch<='z') 
{
printf("your charecter is small letter") ;
}
else if(ch>='0'&&ch<='9')
{
printf("your charecter is digit") ;
}
else
{
printf("invalid input") ;
}
return 0 ;
}