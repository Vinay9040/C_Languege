/*Write a C program to enter a distance in to kilometre and convert it in to meter, feet, inches and centimetre*/

#include<stdio.h>
int main()
{
    float KM=5.9;
    printf("enter length in kilometer : ") ;
    // scanf("%f",KM) ;
    printf("%f KM = %f meters",KM,KM*1000) ;
    printf("%f KM = %f meters",KM,KM*3280.84) ;
    printf("%f KM = %f meters",KM,KM*39370.08) ;
    printf("%f KM = %f meters",KM,KM*1000*100) ;

    return 0 ;

}