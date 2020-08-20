#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;
    int i;
    for (int i=1; i<=10; i++)
    {
        scanf("%lf",x);
        if (x==969)
        {
            break;
        }
    }

    printf("%d\n", i);
    printf("End");

    return 0;
}
