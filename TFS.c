//TFS
#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num % 3 != 0 && num % 5 != 0 && num % 7 != 0)
    {
        printf("%d", 0);
    }
    else if (num % 3 == 0 && num % 5 != 0 && num % 7 != 0)
    {
        printf("%d", 1);
    }
    else if (num % 5 == 0 && num % 3 != 0 && num % 7 != 0)
    {
        printf("%d", 2);
    }
    else if (num % 3 == 0 && num % 5 == 0 && num % 7 != 0)
    {
        printf("%d", 3);
    }
    else if (num % 7 == 0 && num % 3 != 0 && num % 5 != 0)
    {
        printf("%d", 4);
    }
    else if (num % 7 == 0 && num % 3 == 0 && num % 5 != 0)
    {
        printf("%d", 5);
    }
    else if (num % 7 == 0 && num % 5 == 0 && num % 3 != 0)
    {
        printf("%d", 6);
    }
    else if (num % 3 == 0 && num % 5 == 0 && num % 7 == 0)
    {
        printf("%d", 7);
    }
}