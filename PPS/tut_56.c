#include<stdio.h>

int fact(int n){
if (n==0){
    return 1;
}

    int fnm1 = fact(n-1);
    int f = n * fnm1;

    return f;
}

int main(){

    int n;
    printf("%d",fact(5));
    return 0;

}