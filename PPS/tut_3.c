/*Write a program to calculate simple interest (i = (p*r*n)/100 )i = Simple interestp = Principal amountr = Rate of interestn = Number of years*/

#include<stdio.h>
int main()
{
    int n ;
    float p,r,i ;
    printf("entrt amount : ") ;
    scanf("%f",&p) ;

    printf("enter no. of years : ") ;
    scanf("%d",&n) ;

     printf("entrt rate : ") ;
    scanf("%f",&r) ;

    i = (p*r*n)/100 ;
    printf("instrest = %f",i) ;
    return 0 ;
}