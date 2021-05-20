// Lab03-3.cpp
#include <stdio.h>

int main()
{
    int i, j, k, l, m, n, num;
    scanf("%d", &num);

    for (i = 0; i < (2 * num) - 1; i++)
    {
        for (k = 0; k < i; k++)
        {
            printf("*");
        }
        for (j = 0; j < ((2 * num) - 1) - (2 * i); j++)
        {
            printf("w");
        }
        for (m = 0; m < i; m++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}