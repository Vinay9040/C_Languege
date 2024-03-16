/*Write a C program to find that the accepted number is Negative, or Positive or Zero.*/

#include<stdio.h>
int main() {
    int a;
    printf("enter the number : ");
    scanf("%d",&a);
   
    if(a<0) {
    printf("the number is negetive ");     }

   else if(a>0) {
    printf("the number is positive "); 
    }
     else if(a==0) {
    printf("the number is zero ");
     }

     else{
        printf("invalid number");
     }
    return 0;
}