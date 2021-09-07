#include <stdio.h>

int main()
{
    printf("Enter size of rectangle : ");
    int n;
    scanf("%d", &n);
    if (n <= 0) {printf("This is impossible!"); return 0;}
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            if ((k == 0) || (k == n - 1) || (i == 0) || (i == n - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}