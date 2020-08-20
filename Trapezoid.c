//Trapezoid
#include <stdio.h>
#include <math.h>
int main()
{
    double result, sideA, sideB, height;
    scanf("%lf %lf %lf", &sideA, &sideB, &height);
    if (sideA > 0 && sideB > 0 && height >= 0)
    {
        result = 0.5*(sideA + sideB)*height;
        printf("Area of Trapezoid is %.2f", result);
    }
    else
    {
        printf("Error");
    }

    return 0;
}