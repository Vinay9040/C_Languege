// STACK USING STRUCTURE
//~~~~~~~~~~~~~~~~~~~~~~~

#include<stdio.h>
#include<stdlib.h>

#define n 5

typedef struct stack2
{
    int arr[5];
    int top;
}S;


int isEmpty(S *s){
    return s->top == -1;
}
int isFull(S *s){
    return s->top == n-1;
}

void push(int value,S *s){
    if(isFull(s)){
        printf("stack is full !\n");
        return;
    }
    s->top++;
    s->arr[s->top] = value;
    printf("data added\n");
}


int pop(S *s){
    if(isEmpty(s)){
        printf("Stack is empty !\n");
        return 0;
    }
    int val = s->arr[s->top];
    s->top--;
    return val;
}

int peek(S *s){
    if(isEmpty(s)){
        printf("Stack is empty !\n");
        return 0;
    }
    return s->arr[s->top];
}

void display(S *s){
    if(isEmpty(s)){
        printf("Stack is empty !\n");
        return ;
    }
    int temp = s->top;
    while(temp>=0){
        printf("%d\n",s->arr[temp]);
        temp--;
    }
}



void main(void)
{
    S s1;
    s1.top = -1;
    int temp, var;
    while (1)
    {
        printf("1.push 2.pop 3.peek 4.disply 5.exit \n");
        scanf("%d", &temp);
        switch (temp)
        {
        case 1:
            if (isFull(&s1))
            {
                printf("stack is overflow !");
            }
            else
            {
                printf("enter the data\n");
                scanf("%d", &var);
                push(var,&s1);
            }
            break;

        case 2:
            printf("%d \n", pop(&s1));
            break;

        case 3:
            printf("%d \n", peek(&s1));
            break;
        case 4:
            display(&s1);
            break;
        case 5:
            exit(0);
            break;

        default:
            printf("wrong input\n");
            break;
        }
    }

}
