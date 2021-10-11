#include <stdio.h>
#include <stdio.h>

int stack[10];
int top = -1;

void push()
{
    int num;
    if (top > 10)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter number to insert\n");
        scanf("%d", &num);
        top++;
        stack[top] = num;
    }
}

void display()
{

    if (top == -1)
    {
        printf("\nNO ELEMENTS TO DISPLAY\n");
    }
    else
    {
        printf("\nElements present in the stack are : ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nNO ELEMENTS TO POP\n");
    }
    else
    {
        if (top == 0)
        {
            printf("\n%d POPPED\n", stack[top]);
            top == -1;
        }
        else
        {
            printf("\n%d POPPED\n", stack[top]);
            top--;
        }
    }
}

int main()
{

    int ch;
    do
    {
        printf("\nSELECT AN OPTION\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");

        printf("Enter the option: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        default:
        {
            return 0;
        }
        }

    } while (1);

    return 0;
}