//1D Distance
#include <stdio.h>
#include <math.h>

int main()
{
    double num1, num2, difference;
    scanf("%lf %lf", &num1, &num2);

    if (num1 > num2)
    {
        difference = num1 - num2;
    }
    else
    {
        difference = num2 - num1;
    }

    printf("%.2f", difference);
    return 0;
}