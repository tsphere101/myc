//Water Bill
#include <stdio.h>
int main()
{
    int unit;
    double price;
    scanf("%d", & unit);
    if (unit >= 0 && unit <= 5)
    {
        price = 100;
        printf("%.2f baht", price);
    }
    else if (unit > 5)
    {
        price = 100 + ((unit-5)*18.5);
        printf("%.2f baht", price);
    } 

    return 0;
}