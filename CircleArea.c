//Circle Area
#include <stdio.h>
#include <math.h>
#define PI 22.0 / 7

int main()
{
    double radius;
    scanf("%lf", &radius);
    if (radius >= 0)
    {
        printf("%f", PI * radius * radius);
    }
    else
    {
        printf("Error");
    }
    return 0;
}