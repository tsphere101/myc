#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int facFor(int n)
    {
        if (n==1 || n==0)
        {
            return 1;
        }

        int result = 1;    
        for (n; n>1; n--)
        {
            
            result *= n;
        }

        return result;
    }
    int my;
    scanf("%d", &my);
    printf("%d", fac(my));


    int facWhile () 
    {
        

    }



    return 0;
} 
