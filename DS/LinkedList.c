#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void addAtLast(struct Node **head, int val)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->data = val;
    new->next = NULL;
    if (*head == NULL)
    {
        *head = new;
    }
    else
    {
        struct Node *temp;
        temp = (struct Node *)malloc(sizeof(struct Node));

        temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
    }
}



void lltravel(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("the element is : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void freethay(struct Node **head)
{
    struct Node *ptr = *head;
    while (ptr != NULL)
    {
        struct Node *temp = ptr;
        ptr = ptr->next;
        free(temp);
    }
    *head = NULL;  // Set the head pointer to NULL after freeing the memory
}


void main()
{
    // struct Node *head;
    // struct Node *second;
    // struct Node *third;
    // struct Node *fourth;

    // head = (struct Node *)malloc(sizeof(struct Node));
    // second = (struct Node *)malloc(sizeof(struct Node));
    // third = (struct Node *)malloc(sizeof(struct Node));
    // fourth = (struct Node *)malloc(sizeof(struct Node));

    // head->data = 1;
    // head->next = second;

    // second->data = 2;
    // second->next = third;

    // third->data = 3;
    // third->next = fourth;

    // fourth->data = 4;
    // fourth->next = NULL;

    // lltravel(head);
    struct Node* first = NULL;

    addAtLast(&first,2);
    addAtLast(&first,3);
    addAtLast(&first,4);
    addAtLast(&first,5);
    lltravel(first);


    freethay(&first);
    lltravel(first);
}