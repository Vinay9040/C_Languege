// QUEUE USING STRUCTURE
//~~~~~~~~~~~~~~~~~~~~~~~

#include <stdio.h>
#include <stdlib.h>
#define n 3

typedef struct queue2
{
    int arr[n];
    int front, rear;
} Q;

int isFull(Q *q)
{
    return q->rear == (n-1);
}
int isEmpty(Q *q)
{
    return q->front == -1 || (q->front > q->rear && q->rear != -1);
}

void insert(int val, Q *q)
{
    if (isFull(q))
    {
        printf("Q is full !\n");
        return;
    }
    if(q->front == -1){
        q->front++;
    }
    q->rear++;
    q->arr[q->rear] = val;
    printf("data added !\n");
}

int remove2(Q *q)
{
    if (isEmpty(q))
    {
        printf("Q is Empty !\n");
        return 0;
    }
    int temp = q->arr[q->front];
    q->front++;
    return temp;
}

int peek_rear(Q *q)
{
    if (isEmpty(q))
    {
        printf("Q is Empty !\n");
        return 0;
    }
    return q->arr[q->rear];
}

void peek(Q *q)
{
    if (isEmpty(q))
    {
        printf("Q is Empty !\n");
        return ;
    }
    printf("front is = %d  &  rear is = %d\n", q->arr[q->front], peek_rear(q));
}



void display(Q *q)
{
    if (isEmpty(q))
    {
        printf("Q is Empty !\n");
        return ;
    }
    int temp = q->front;
    while (temp <= q->rear)
    {
        printf("%d\n", q->arr[temp]);
        temp++;
    }
}

int main()
{
    Q q;
    q.front = q.rear = -1;
    int temp, var;
    while (1)
    {
        printf("1.add 2.remove 3.peek 4.disply 5.exit \n");
        scanf("%d", &temp);
        switch (temp)
        {
        case 1:
            if (q.rear == (n - 1))
            {
                printf("Q is full\n");
            }
            else
            {
                printf("enter the data\n");
                scanf("%d", &var);
                insert(var, &q);
            }
            break;

        case 2:
            printf("%d \n", remove2(&q));
            break;

        case 3:
            peek(&q);
            break;
        case 4:
            display(&q);
            break;
        case 5:
            exit(0);
            break;

        default:
            printf("wrong input\n");
            break;
        }
    }
    return 0;
}
