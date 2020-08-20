#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ans =0;
    while (1)
    {
        int buffer;
        scanf("%d", &buffer);
        if (buffer == -1) break;
        ans += buffer;

    }
    printf("%d",ans);
    return 0;

}
