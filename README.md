#include<stdio.h>
int main()
{

int number1 , number2 , add , sub , multiply ;
float divide ;

printf("enter number 1\n") ;
scanf("%d", &number1) ;
printf("enter number 2\n") ;
scanf("%d", &number2) ;

add = number1 + number2 ;
sub = number1 - number2 ;
multiply = number1 * number2 ;
divide = number1 / number2 ;

printf("add = %d\n" ,add) ;
printf("sub = %d\n",sub) ;
printf("multiply = %d\n",multiply) ;
printf("divide = %f\n",divide) ;

return 0 ;
}
