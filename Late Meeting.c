//Late Meeting
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int hrs, min, sec;
    int estMin, estSec;
    char meridiem[2];
    int merFlag, flagRes = 2;
    char merResult[2];

    scanf("%d %d %d %s %d %d", &hrs, &min, &sec, meridiem, &estMin, &estSec);
    if (meridiem[0] == 'a' && meridiem[1] == 'm')
    {
        merFlag = 0;
    }
    else if (meridiem[0] == 'p' && meridiem[1] == 'm')
    {
        merFlag = 1;
    }
    else
    {
        printf("Error");
    }

    if (merFlag == 0 || merFlag == 1)
    {
        min += estMin;
        sec += estSec;

        if (sec >= 60)
        {
            min += floor(sec / 60.0);
            sec %= 60;
        }

        if (min >= 60)
        {
            hrs += floor(min / 60.0);
            min %= 60;
        }
        if (hrs > 12 && merFlag == 0)
        {
            merFlag = 1;
            hrs %= 12;
        }
        else if (hrs > 12 && merFlag == 1)
        {
            merFlag = 0;
            hrs %= 12;
        }
        else if (hrs == 12)
        {
            merFlag++;
        }

        /*if (merFlag == 0 && hrs == 0 && min == 0 && sec == 0)
        {
            flagRes = 1;
            hrs = 12;
            merFlag = 1;
        }*/

        if (merFlag % 2 == 0)
        {
            merResult[0] = 'a';
            merResult[1] = 'm';
        }
        else if (merFlag % 2 == 1)
        {
            merResult[0] = 'p';
            merResult[1] = 'm';
        }

        printf("%02d:%02d:%02d %c%c", hrs, min, sec, merResult[0], merResult[1]);
    }
}