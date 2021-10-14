#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *root = NULL;

void insert(int num)
{

    struct node *newnode, *parent, *current;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;
    newnode->left = newnode->right = NULL;

    if (root == NULL)
    {
        root = newnode;
        return;
    }
    else
    {
        current = root;
        parent = NULL;
    }
    while (1)
    {
        parent = current;

        if (num > parent->data)
        {
            current = current->right;

            if (current == NULL)
            {
                parent->right = newnode;
                return;
            }
        }
        else
        {

            current = current->left;

            if (current == NULL)
            {
                parent->left = newnode;
                printf("%d Inserted\n");
                return;
            }
        }
    }
}

void inorder(struct node *root)
{

    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{

    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{

    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
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
        insert(num);

        printf("You want to continue?? YES or NO\n");
        scanf("%s", str);

    } while (str[0] == 'y' || str[0] == 'Y');

    printf("\nInorder: \n");
    inorder(root);
    printf("\nPreorder: \n");
    preorder(root);
    printf("\nPostorder: \n");
    postorder(root);

    return 0;
}