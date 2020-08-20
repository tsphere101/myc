#include <stdio.h>
int main()
{
    printf("Hello! feels free to enter the number, \nin order to end the process enter -1\n::");
    double collector = 0;
    double result = 0;
    do
    {
        scanf("%lf", &collector);
        result += collector;

        if (collector == -1)
        {
            break;
        }
        else if (collector != -1)
            {
                printf("current result is = %.2f\n::", result);
            }
    }
    while (1);
    printf("\n\nFinal result is == %.2f\n\n", result+1);
    return 0;
}
