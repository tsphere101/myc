//2D Distance
//distance = sqrt((x2-x1)^2 + (y2-y1)^2)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double x1, x2, y1, y2, distance;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    double xDif = abs(x1 - x2);
    double yDif = abs(y1 - y2);

    distance = sqrt(xDif * xDif + yDif * yDif);

    printf("Distance = %.3f", distance);

    return 0;
}