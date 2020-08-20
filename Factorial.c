#include <stdio.h>
#include <math.h>

int fact(int num)
{
    int result = 1;
    while (num > 1)
    {
        result *= num;
        num--;
    }
    return result;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", fact(num));
    return 0;
}