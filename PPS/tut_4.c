/*Write a C program to interchange two numbers.*/

#include<stdio.h>
int main()
{
    int a,b ;
    printf("entrt value of a: ") ;
    scanf("%d",&a) ;

    printf("entrt value of b: ") ;
    scanf("%d",&b) ;

    a += b ;
    b = a - b ;
    a -= b ;

    printf("after interchange values A = %d B = %d",a,b) ;

    return 0 ;
}