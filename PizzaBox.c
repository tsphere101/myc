//PizzaBox
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    long pizza;
    scanf("%ld", &pizza);
    if (pizza >= 0)
    {
        printf("%ld", (long)ceil(pizza / 8.0));
    }
    else
    {
        printf("Error");
    }

    return 0;
}