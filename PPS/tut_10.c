/*Write a program to read three numbers from keyboard and find out maximum out of these three. (nested if else)*/

#include<stdio.h>
int main()
{
    int a,b,c ;
    printf("enter the number a : ");
    scanf("%d",&a);
    
    printf("enter the number b : ");
    scanf("%d",&b);

    printf("enter the number c : ");
    scanf("%d",&c);

    if(a>b && a>c) 
    {
        if(b>c) 
        {
            printf("bigest number is a & smallest number is c");
        }
    }

    else if(a<b && a<c)
    {
        if(b<c) 
        {
            printf("bigest number is c & smallest number is a");
        }
    }

    else if(a<b && a>c) 
    {
        if(b>c) 
        {
            printf("bigest number is b & smallest number is c");
        }
    }
            else 
            {
                printf("wTF !!");
            }

        return 0;
}