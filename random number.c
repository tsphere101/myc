#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void printRandoms(int lower, int upper, int count)
{
    int i;
    for (i = 0; i < count; i++) {
        
        int num = (rand()%(upper - lower +1)) + lower;
        printf("%d \n", num);
    }
}


int main()
{
    int lower, upper, count;

    //Input the lower
    printf("Input Lower : ");
    scanf("%d", &lower);

    //Input the upper
    printf("Input Upper : ");
    scanf("%d", &upper);

    //Input count
    printf("Input count : ");
    scanf("%d", &count);

    printRandoms(lower, upper, count);

    return 0;

}
