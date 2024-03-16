#include<stdio.h>

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

void bubleSort(int *arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;;j++);
    }

}

int main(){
    int arr[] = {2,4,3,7,6,38,5,9,2,5};
    int size = sizeof(arr)/sizeof(int);
    bubleSort(&arr,size);
    printarr(arr,size);
}