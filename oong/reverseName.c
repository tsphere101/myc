#include <stdio.h>

int main()
{
    printf("Enter Input : ");
    char s[500];
    scanf("%s", s);
    int len;
    for (len = 0; s[len] != '\0'; len++)
        ;
    for (int i = len - 1; i >= 0; i--)
    {
        int c = s[i];
        if (c >= 97)
        {
            c -= 32;
        }
        printf("%c\n", c);
    }
    printf("Name length %d", len);
    return 0;
}
