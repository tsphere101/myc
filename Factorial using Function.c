#include <stdio.h>
#include <math.h>

long fact(long num)
{
    long result;

    if (num > 1)
    {
        result = num * fact(num -1);
        return result;
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", fact(num));
    return 0;
}