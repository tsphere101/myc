//Are They Difference?
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char x, y;

    scanf("%c %c", &x, &y);

    if (abs(x - y) == 32 || abs(x - y) == 0)
    {
        printf("%c\' and \'%c\' are the same character.", x, y);
    }
    else
    {
        printf("TOO DIFFERENCE!!");
    }

    return 0;
}