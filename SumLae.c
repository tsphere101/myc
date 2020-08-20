//Sum Lae
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long num, result = 0;
    scanf("%ld", &num);
    if (num > 0)
    {
        for (int i = 1; i <= num; i++)
        {
            result += i;
        }
        printf("%ld ", result);
    } else printf("Error");
    return 0;
}