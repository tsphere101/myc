#include <stdio.h>
void Tri(int n)
{
    int k;

    for (int i = 1; i <= n; i++)
    {
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{

    int n;
    scanf("%d", &n);
    Tri(n);

    return 0;
}