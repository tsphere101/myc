#include <stdio.h>

int main()
{
    printf("Enter a number : ");
    int number;
    scanf("%d",&number);
    if (number<0) {printf("Number is too small.");return 0;}
    for (int i = 0 ; i < number ; i ++) {
        for (int k = 0 ; k < number ;k ++) {
            printf("%c",k+i+97);
        }
        printf("\n");
    }
    return 0;
}