#include<stdio.h>
int main()
{
 int a,b,*c,*d,t ;

printf("enter the value of a & b : ") ;
scanf("%d%d",&a,&b);

printf("before swapping \na = %d\nb =%d\n",a,b) ;

c=&a ;
d=&b ;

t=*d ;
*d=*c;
*c=t ;

printf("after swapping\na=%d\nb=%d",a,b) ;

return 0;
}