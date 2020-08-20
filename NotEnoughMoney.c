//Not Enough Money
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double money, bal;
    scanf("%lf", &money);
    if (money >= 180)
    {
        bal = money - 180;
        printf("Yes %.2f Baht", bal);
    }
    else
    {
        printf("No");
    }
    return 0;
}