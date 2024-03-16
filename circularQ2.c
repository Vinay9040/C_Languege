// CIRCULAR QUEUE BY STRUCTURE
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <stdio.h>
#include <stdlib.h>
#define n 3

typedef struct circularQ2
{
    int arr[n];
    int front, rear;
} Q;

int isEmpty(Q *q)
{
    return q->front == -1 && q->rear == -1;
}

int isFull(Q *q)
{
    return (q->front == (q->rear + 1) % n);
}

void add(int val, Q *q)
{

    if (isEmpty(q))
    {
        q->front = 0;
        q->rear = 0;
    }
    else
    {
        q->rear = (q->rear + 1) % n;
    }
    q->arr[q->rear] = val;
    printf("data added !\n");
}
void pop(Q *q)
{
    if (isEmpty(q))
    {
        printf("Q is Empty !\n");
        return;
    }
    printf("%d is removed !\n", q->arr[q->front]);
    if (q->front == q->rear)
    {
        q->front = q->rear = -1;
    }
    else
    {
        q->front = (q->front + 1) % n;
    }
}

void display(Q *q)
{
    if (isEmpty(q))
    {
        printf("Q is Empty !\n");
        return;
    }
    for (int i = q->front; i != q->rear; i = (i + 1) % n)
    {
        printf("%d\n", q->arr[i]);
    }
    printf("%d\n", q->arr[q->rear]);
}

void main()
{
    Q q;
    q.front = q.rear = -1;

    int val, var;

    while (1)
    {
        printf("1.Enque 2.Deque 3.display 4.exit\n");
        scanf("%d", &var);
        switch (var)
        {
        case 1:
            if (isFull(&q))
            {
                printf("Q is Full !\n");
            }
            else
            {
                printf("Enter the element : \n");
                scanf("%d", &val);
                add(val, &q);
            }
            break;

        case 2:
            pop(&q);
            break;

        case 3:
            display(&q);
            break;

        case 4:

            exit(0);
            break;

        default:
            printf("enter right element\n");
            break;
        }
    }
}