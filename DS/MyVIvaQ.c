#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* f;
struct Node* r;


void addNode(int data){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    if(f==NULL && r== NULL){
        r=f=newnode;
        return;
    }
    r->next=newnode;
    newnode->next=f;
    r = newnode; 
}

int removeNode(){
    if(f==NULL){
        printf("LL is empty !");
        return -1;
    }
    int temp;
    if(f==r){
        temp= f->data;
        f = r = NULL;
    }else{
        temp= f->data;
        f = f->next;
    }
    return (int)temp;
}

void display(){
    if(f==NULL){
        printf("LL is empty !");
        return ;
    }
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp = f;
    while(temp != r){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
    printf("%d\n",r->data);
}


void main(){
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);
    addNode(5);printf("%d\n",removeNode());
    display();
    display();


}
