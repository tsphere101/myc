#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, ans1, ans2;
    scanf("%lf %lf %lf", &a, &b, &c);
    // printf("%f %f %f", a, b, c);
    ans1 = (-b + (sqrt((b * b) - (4 * a * c)))) / (2 * a);
    ans2 = (-b - (sqrt((b * b) - (4 * a * c)))) / (2 * a);

    if (ans1 < ans2)
    {
        printf("x1 = %.2f, x2 = %.2f", ans1, ans2);
    }
    else if (ans2 < ans1)
    {
        printf("x1 = %.2f, x2 = %.2f", ans2, ans1);
    }
    else if (ans1 == ans2)
    {
        printf("x = %.2f", ans1);
    }
    else
    {
        printf("Error");
    }
    return 0;
}