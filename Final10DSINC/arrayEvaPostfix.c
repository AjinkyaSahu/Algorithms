#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int stack[10];
int top = -1;

void push(int num)
{

    top++;
    stack[top] = num;
}

int pop()
{

    if (top == -1)
    {
        printf("\nEnter valid expression");
        return 0;
    }
    else
    {
        int a = stack[top];
        top--;
        return a;
    }
}

int main()
{

    char str[20];
    int num, num1, num2, ans;

    printf("Enter Postfix Expression\n");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (isdigit(str[i]))
        {
            num = str[i] - 48;
            push(num);
        }

        else
        {
            num1 = pop();
            num2 = pop();

            switch (str[i])
            {

            case '+':
            {
                ans = num1 + num2;
                break;
            }
            case '-':
            {
                ans = num2 - num1;
                break;
            }
            case '*':
            {
                ans = num2 * num1;
                break;
            }
            case '/':
            {
                ans = num2 / num1;
                break;
            }
            default:
            {

                printf("Wrong Expression!!");
                break;
            }
            }

            push(ans);
        }
    }

    printf("OUTPUT : %d", pop());

    return 0;
}