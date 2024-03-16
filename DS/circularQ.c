// CIRCULAR-QUEUE BY ARRAY
//~~~~~~~~~~~~~~~~~~~~~~~~

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define n 3

int q[n];
int front, rear;

int isEmpty();
int isFull();
void add(int val);
int pop();
void display();

void main()
{

    front = rear = -1;
    int val, var;
    while (1)
    {
        printf("1.add  2.remove 3.display 4.exit\n");
        scanf("%d", &var);
        switch (var)
        {
        case 1:
            if (isFull())
            {
                printf("Q is full !\n");
            }
            else
            { // front = rear = 0;
                printf("enter value : ");
                scanf("%d", &val);
                add(val);
            }
            break;
        case 2:
            printf("%d is removed\n", pop());
            break;

        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("enter valid expretion");
            break;
        }
    }
}

int isEmpty()
{
    return front == -1;
}
// int isFull()
// {
//     return front == (rear + 1) % n;
// }
int isFull()
{
    if ((front == rear + 1) || (front == 0 && rear == n - 1))
    {
        return 1;
    }
    return 0;
}

void add(int val)
{
    if (isFull())
    {
        printf("Q is full !\n");
    }
    if (front == -1)
    {
        front = 0;
    }
    rear = (rear + 1) % n;
    q[rear] = val;
    printf("data added !\n");
}

int pop()
{
    int temp;
    if (isEmpty())
    {
        printf("Q is Empty !\n");
        return 0;
    }
    if (front == rear)
    {
        temp = q[front];
        front = rear = -1;
    }
    else
    {
        temp = q[front];
        front = (front + 1) % n;
    }
    return temp;
}

// void display()
// {
//     if (isEmpty())
//     {
//         printf("Q is Empty\n");
//         return;
//     }
//     int temp = front;
//     while (temp != rear)
//     {
//         printf("%d\n", q[temp]);
//         temp = (temp + 1) % n;
//         if (temp == rear)
//         {
//             printf("%d\n", q[temp]);
//         }
//     }
// }

void display()
{
    if (isEmpty())
    {
        printf("Q is Empty\n");
        return;
    }

    int temp = front;
    do
    {
        printf("%d\n", q[temp]);
        temp = (temp + 1) % n;
    } while (temp != (rear + 1) % n);
}