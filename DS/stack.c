// STACK USING ARRAY
//~~~~~~~~~~~~~~~~~~~~~~~

#include <stdio.h>
#include <stdlib.h>

int stack[10];
int top = -1, size = 0;

void push(int data)
{
    top++;
    size++;
    stack[top] = data;
    printf("data added\n");
}

int pop()
{
    if (top == -1)
    {
        printf("stack is underflow\n");
        return -1;
    }
    int val = stack[top];
    top--;
    size--;
    return val;
}

int peek()
{
    if (top == -1)
    {
        printf("stack is underflow\n");
        return -1;
    }
    int val = stack[top];
    return val;
}

void display()
{
    if (top == -1)
    {
        printf("stack is underflow\n");
        return;
    }
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
    printf("\n");
}

int main()
{
    int temp, var;
    while (1)
    {
        printf("1.push 2.pop 3.peek 4.disply 5.exit \n");
        scanf("%d", &temp);
        switch (temp)
        {
        case 1:
            if (top == 9)
            {
                printf("stack is overflow !");
            }
            else
            {
                printf("enter the data\n");
                scanf("%d", &var);
                push(var);
            }

            break;

        case 2:
            printf("%d \n", pop());
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
