//48 Book Promotion
#include <stdio.h>

int main()
{
    double price, totalPrice;
    int amount;

    scanf("%d", &amount);
    scanf("%lf", &price);

    if (amount >= 0 && price >= 0)
    {
        if (amount >= 4 && price >= 300)
        {
            totalPrice = price - (price * 0.1);
            printf("Promotion: Yes\n");
            printf("Price: %.2f baht", totalPrice);
        }
        else
        {
            totalPrice = price;
            printf("Promotion: No\n");
            printf("Price: %.2f baht", totalPrice);
        }
    }
    else
    {
        printf("Error");
    }
    return 0;
}
