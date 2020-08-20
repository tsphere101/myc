//Rectangle

#include <stdio.h>
#include <math.h>

int main()
{
    double width, height;
    scanf("%lf %lf", &width, &height);
    if (width >= 0 && height >= 0)
    {
        printf("Area = %lf x %lf = %lf", width, height, width * height);
    }
    else
        printf("Error");

    return 0;
}