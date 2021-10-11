#include <stdio.h>
#include <stdlib.h>

int main()
{

    int m, n;
    int max = 0;

    printf("Enter number of rows\n");
    scanf("%d", &m);
    printf("Enter number of columns\n");
    scanf("%d", &n);

    printf("Enter the elements ONE BY ONE:\n");

    int *ptr = (int *)malloc(m * n * sizeof(int));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", (ptr + i * n + j));
        }
    }
    printf("\nMax element in each row : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (max < *(ptr + i * n + j))
            {
                max = *(ptr + i * n + j);
            }
        }
        printf("%d", max);
        printf("\n");
        max = 0;
    }

    return 0;
}