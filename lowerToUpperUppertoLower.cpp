//Upper to lower, Lower to Upper
#include <stdio.h>

int main()
{
    int i;
    char str[100];
    printf("UPPERCASE to lowercase\nlowercase to UPPERCASE\nInsert string : ");
    scanf("%s", str);

    for (i = 0; str[i]; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z') {str[i] -= 32;}
        else if(str[i] >= 'A' && str[i] <= 'Z') {str[i] += 32;}
    }

    printf("%s",str);

    return 0;
}