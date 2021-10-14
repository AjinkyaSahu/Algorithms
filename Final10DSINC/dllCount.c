#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *head = NULL;
struct node *temp;

void insert(struct node **head, int num)
{

    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;
    newnode->left = NULL;
    newnode->right = NULL;

    if ((*head) == NULL)
    {
        (*head) = temp = newnode;
        return;
    }
    else
    {
        temp->right = newnode;
        newnode->left = temp;
        temp = newnode;
    }
}

int display(struct node **head)
{

    struct node *te = (*head);
    int count = 0;

    while (te != NULL)
    {
        count++;
        printf("%d ", te->data);
        te = te->right;
    }
    return count;
}

int main()
{

    int num, ans;
    char str[10];

    do
    {
        printf("Enter number to insert\n");
        scanf("%d", &num);
        insert(&head, num);

        printf("Do you want add?? YES or NO\n");
        scanf("%s", str);
    } while (str[0] == 'y' || str[0] == 'Y');

    ans = display(&head);
    printf("\nCount = %d\n", ans);

    return 0;
}
