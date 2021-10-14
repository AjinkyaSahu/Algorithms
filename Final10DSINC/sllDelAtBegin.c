#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{

    int data;
    struct node *link;
};
struct node *head = NULL;
struct node *temp;

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

void display(struct node **head)
{

    struct node *tem;
    tem = (*head);

    while (tem != NULL)
    {
        printf("%d ", tem->data);
        tem = tem->link;
    }
}

void delAtBegin(struct node **head)
{

    if ((*head) == NULL)
    {
        printf("\nNo elements to DELETE\n");
    }
    else if ((*head)->link == NULL)
    {
        (*head) == NULL;
    }
    else
    {

        (*head) = (*head)->link;
    }
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

    printf("\nElements are :\n");
    display(&head);
    printf("\nAfter one Del at begin\nElements are :\n");
    delAtBegin(&head);
    display(&head);
    printf("\nAfter two Del at begin\nElements are :\n");
    delAtBegin(&head);
    display(&head);

    return 0;
}
