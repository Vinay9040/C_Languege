// DoubleEnded Queue by Arrary
//~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <stdio.h>
#include <stdlib.h>
#define n 3

int arr[3];
int front, rear;

int isEmpty()
{
    return front == -1 && rear == -1;
}
int isFull()
{
    return front == 0 && rear == n - 1;
}
void pushAtFirst(int data)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        arr[front] = data;
        printf("added \n");
        return;
    }

    if (front == 0 && rear != n - 1)
    {
        for (int i = rear; i >= front; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = data;
        rear++;
    }
    else
    {
        arr[--front] = data;
    }
}
void pushAtLast(int data)
{

    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        arr[front] = data;
        printf("added \n");
        return;
    }
    if (front != 0 && rear == n - 1)
    {
        for (int i = front; i <= rear; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[rear] = data;
        front--;
    }
    else
    {
        arr[++rear] = data;
    }
}
void popAtFirst()
{
    printf("%d is removed\n", arr[front]);
    front++;
    if (front > rear)
    {
        front = rear = -1;
    }
}
void popAtLast()
{
    printf("%d is removed\n", arr[rear]);
    rear--;
    if (front > rear)
    {
        front = rear = -1;
    }
}
void display()
{
    if (isEmpty())
    {
        printf("DQ is Empty !\n");
        return;
    }
    for (int i = front; i <= rear; i++)
    {
        printf("%d\n", arr[i]);
    }
}
void peek()
{
    if (isEmpty())
    {
        printf("DQ is Empty !\n");
        return;
    }
    printf("Front is : %d\n", arr[front]);
    printf("Rear is : %d\n", arr[rear]);
}

void case1helper()
{
    int temp,val;
    if (isFull())
    {
        printf("DQ is full !\n");
        return;
    }
    else
    {
        printf("1.pushAtFirst  2.pushAtlast\n");
        scanf("%d", &temp);
        printf("Enter the Data : \n");
        scanf("%d", &val);
        if (temp == 1)
        {
            pushAtFirst(val);
        }
        else if (temp == 2)
        {
            pushAtLast(val);
        }
        else
        {
            printf("Wrong input !\n");
        }
    }
}

void case2helper()
{
    int temp;

    if (isEmpty())
    {
        printf("DQ is Empty !\n");
    }
    else
    {
        printf("1.popAtFirst  2.popAtlast\n");
        scanf("%d", &temp);

        if (temp == 1)
        {
            popAtFirst();
        }
        else if (temp == 2)
        {
            popAtLast();
        }
        else
        {
            printf("Wrong input !\n");
        }
    }
}

void main()
{
    front = rear = -1;
    int var;
    printf("welcomw to doubly Queue program !\n");

    while (1)
    {
        printf("1.push 2.pop 3.peek 4.display 5.exit\n");
        scanf("%d", &var);
        switch (var)
        {
        case 1:
            case1helper();
            break;

        case 2:
            case2helper();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;
        case 5:
            exit(1);
            break;

        default:
            break;
        }
    }
}