#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    scanf("%d", &num);
    int i;
    double f = num;
    for (i = 0; abs(f) > 10; abs(f) /= 10)
    {
        int i++;
    }
    printf("%d", i);

        return 0;
}
