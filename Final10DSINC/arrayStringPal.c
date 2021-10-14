#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char stack[10];
int top = -1;

void push(char c)
{

    top++;
    stack[top] = c;
}

char pop()
{

    char te = stack[top];
    top--;
    return te;
}

int main()
{
    char str[50];

    printf("Enter the string to check for Palindrome\n");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        push(str[i]);
    }

    for (int i = 0; i < strlen(str); i++)
    {
        if (pop() != str[i])
        {
            printf("\nNOT A PALINDROME\n");
            return 0;
        }
    }

    printf("\nYES, PALINDROME");

    return 0;
}