#include <stdio.h>

int main()
{
    char input[100];
    gets(input);
    int i, k;
    for (i = 0; input[i] != '\0'; ++i)
    {

        while (!((input[i] >= 97 && input[i] <= 122) || (input[i] >= 65 && input[i] <= 90) || input[i] == '\0'))
        {

            for (k = i; input[k] != '\0'; ++k)
            {
                input[k] = input[k + 1];
            }
            input[k] = '\0';
        }
    }
    printf("%s", input);

    return 0;
}
