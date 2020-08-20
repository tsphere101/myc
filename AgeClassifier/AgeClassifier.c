#include <stdio.h>


int main()
{
    int age;
    //Age Input
    printf("Input age : ");
    scanf("%d", &age);

    //Conditions
    if(age < 0) {
        printf("You haven't existed");
    } else if (age <= 11) {
        printf("You are Kid");
    } else if (age >=12 && age<= 20) {
        printf("You are Teen");
    } else if (age >=21 && age<=60) {
        printf("You are Adult");
    } else if (age > 60) {
        printf("You are Old!");
    } else {printf("Unable to classify");

    }
    return 0;
}

