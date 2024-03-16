// QUEUE USING ARRAY
//~~~~~~~~~~~~~~~~~~~~~~~


#include <stdio.h>
#include <stdlib.h>
#define n 3

int q[n];
int front = -1, rear = -1, size = 0;

void add(int data)
{

    // else{

    // }
    if (front == -1)
    {
        front++;
    }
    rear++;
    size++;
    q[rear] = data;
    printf("data added\n");
}

int dequeue()
{
    if (front == -1)
    {
        printf("Q is empty\n");
        return -1;
    }
    int val = q[front];
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
    size--;
    return val;
}

int peek()
{
    if (rear < front)
    {
        printf("Q is empty\n");
        return -1;
    }
    int val = q[front];
    return val;
}

void display()
{
    if (rear == front)
    {
        printf("Q is empty\n");
        return;
    }
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", q[i]);
    }
    printf("\n");
    return;
}

int main()
{
    int temp, var;
    while (1)
    {
        printf("1.add 2.remove 3.peek_front 4.disply 5.exit \n");
        scanf("%d", &temp);
        switch (temp)
        {
        case 1:
            if (rear == (n - 1))
            {
                printf("Q is full\n");
            }
            else
            {
                printf("enter the data\n");
                scanf("%d", &var);
                add(var);
            }
            break;

        case 2:
            printf("%d \n", dequeue());
            break;

        case 3:
            printf("%d \n", peek());
            break;
        case 4:
            display();
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