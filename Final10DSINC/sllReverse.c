#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *link;
};
struct node *head = NULL;
struct node *temp = NULL;

void insert(struct node **head, int num)
{

    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;
    newnode->link = NULL;

    if ((*head) == NULL)
    {
        (*head) = temp = newnode;
        return;
    }
    else
    {

        temp->link = newnode;
        temp = newnode;
    }
}

void display()
{

    struct node *te = head;

    while (te != NULL)
    {
        printf("%d ", te->data);
        te = te->link;
    }
}

void reverse(struct node **head)
{

    struct node *cur = (*head);
    struct node *prev = NULL;
    struct node *next = (*head);

    while (cur != NULL)
    {
        next = next->link;
        cur->link = prev;
        prev = cur;
        cur = next;
    }

    (*head) = prev;
}

int main()
{

    int num;
    char str[10];

    do
    {
        printf("Enter number to insert\n");
        scanf("%d", &num);
        insert(&head, num);

        printf("Do you want add?? YES or NO\n");
        scanf("%s", str);
    } while (str[0] == 'y' || str[0] == 'Y');

    printf("\nORIGINAL ARRAY:\n");
    display();

    printf("\nREVERSED ARRAY:\n");
    reverse(&head);
    display();

    return 0;
}