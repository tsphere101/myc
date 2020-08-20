//TimeConversion
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long sec, min, hrs, secLeft;
    scanf(" %ld", &sec);
    if (sec >= 0)
    {
        hrs = floor(sec / 3600.0);
        min = floor((sec - (hrs * 3600)) / 60);
        secLeft = sec - (hrs * 3600) - (min * 60);

        printf("%ld hour(s) %ld minute(s) %ld second(s).", hrs, min, secLeft);
    }
    else
    {
        printf("Error");
    }
    return 0;
}