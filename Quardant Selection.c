//Quardant Seclection
#include <stdio.h>
int main()
{
    double x, y;
    scanf("%lf", &x);
    scanf("%lf", &y);

    if (x > 0 && y > 0)
    {
        printf("1");
    }
    else if (x < 0 && y > 0)
    {
        printf("2");
    }
    else if (x < 0 && y < 0)
    {
        printf("3");
    }
    else if (x > 0 && y < 0)
    {
        printf("4");
    }
    else if (x == 0 && y != 0)
    {
        printf("Y Axis");
    }
    else if (x != 0 && y == 0)
    {
        printf("X Axis");
    }
    else if (x == 0 && y == 0)
    {
        printf("Origin");
    }
}