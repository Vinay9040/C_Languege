#include<stdio.h>
int main()
{
float var,*p;
var = 123.0;
p = &var ; 
printf("address of var without using pointer= %u\n",&var) ;
printf("value of var = %f\n",*p) ;
printf("address of var using pointer = %u\n",p);
return 0 ;
}