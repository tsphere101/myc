#include <stdio.h>
#include <math.h>
int main()
{
    double weight, height;
    scanf("%lf", &weight);
    scanf("%lf", &height);
    double BMI = weight / pow((height / 100), 2);
    if (BMI >= 30)
    {
        printf("%f\n", BMI);
        printf("Obesity");
    }
    else if (BMI >= 25 && BMI < 30)
    {
        printf("%f\n", BMI);
        printf("Overweight");
    }
    else if (BMI >= 18.5 && BMI <= 25)
    {
        printf("%f\n", BMI);
        printf("Normal");
    }
    else if (BMI < 18.5)
    {
        printf("%f\n", BMI);
        printf("Underweight");
    }
}