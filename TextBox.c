//Textbox
#include <stdio.h>
#include <string.h>
int main()
{
    char charArr[20];
    int flag = 0;
    scanf("%s", charArr);
    if (strlen(charArr) == 3)
    {
        for (int i = 0; i < 3; i++)
            if (charArr[i] >= 65 && charArr[i] <= 90 || charArr[i] >= 'a' && charArr[i] <= 'z')
            {
            }
            else
            {
                flag++;
                break;
            }

        if (flag == 0)
        {
            printf("*****\n*%s*\n*****", charArr);
        }
        else if (flag != 0)
        {
            printf("Error");
        }
    }
    else
    {
        printf("Error");
    }
    return 0;
}