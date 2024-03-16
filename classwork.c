#include<stdio.h>
#include<string.h>

typedef struct student
{
    char name[40];
    int roll;
    int mark[5];
}St;

void avg(St *s){
    int sum = 0;
    for(int i=0;i<5;i++){
        sum += s->mark[i];
    }
    printf("the average is : %f",(float)(sum/5.0));
}


void main(){
    St arr[5];
    for(int i=1;i<6;i++){
        strcpy(arr[i-1].name,"abcd");
        arr[i-1].roll = 1*i;
        for(int j=1;j<6;j++){
            arr[i-1].mark[j-1] = j*5; 
        }
    }
    avg(&arr[3]);
}
