#include <stdio.h>
#include <math.h>
//Defining isPrime Function
int isPrime(int num)
{
    int x, isNotPrime = 0;
    num = abs(num);
    if (num == 1 || num == 0) //Nethier 1 nor 0 is prime
    {
        return 0;
    }
    for (x = 2; x <= num / 2; x++)
    {
        if (num % x == 0)
        {
            isNotPrime += 1; //if the number is divisible the flag will be increased
        }
    }
    if (isNotPrime == 0)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    int num;
    //using infinite loop for leting user keep entering the number

    printf("Enter an integer : ");
    //check if the input is the integer
    if (scanf("%d", &num))
    {
        if (isPrime(num)) //isPrime(num) will return either 0 or 1
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
}