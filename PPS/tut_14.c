/*Write a C program to read no 1 to 7 and print relatively day Sunday to Saturday.*/

#include<stdio.h>
int main()
{
    int num ;
    printf("enter the day number between 1-7 : ") ;
    scanf("%d",&num) ;
    switch(num)
    {
        case 1: printf("\n monday") ;
        break ;
        case 2: printf("\n tuesday") ;
        break ;
        case 3: printf("\n wednesday") ;
        break ;
        case 4: printf("\n thursday") ;
        break ;
        case 5: printf("\n friday") ;
        break ;
        case 6: printf("\n saturday") ;
        break ;
        case 7: printf("\n sunday") ;
        break ;
        default: printf("\n plz enter the valide number") ;
        break;
    }
    return 0 ;
}