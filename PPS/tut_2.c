/*Write a program to find area of triangle(a=h*b*.5) a = area h = height b = base*/

#include<stdio.h>
int main()
{
float a,b,h ;
printf("enter height : ") ;
scanf("%f",&h) ;

printf("enter base : ") ;
scanf("%f",&b) ;

a = h*b*0.5 ;
printf("\nthe area of triangle = %f", a) ;
return 0;

}