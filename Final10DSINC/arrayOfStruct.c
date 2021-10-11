#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct student
{
    int id;
    char str[50];
    float points;
};

int main()
{

    int n;
    printf("Print value of N = ");
    scanf("%d", &n);

    struct student *ptr = (struct student *)malloc(n * sizeof(struct student));

    for (int i = 0; i < n; i++)
    {
        printf("Enter details of student %d:\n", i + 1);
        printf("Enter ID:\n");
        scanf("%d", &(ptr + i)->id);
        getchar();
        printf("Enter NAME:\n");
        scanf("%[^\n]s", (ptr + i)->str);
        // getchar();
        printf("Enter POINTS:\n");
        scanf("%f", &(ptr + i)->points);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nDetails of %d", i + 1);
        printf("\nID: %d", (ptr + i)->id);
        printf("\nNAME: %s", (ptr + i)->str);
        printf("\nPOINTS: %.2f", (ptr + i)->points);
    }

    return 0;
}