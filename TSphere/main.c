#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    printf("Lorem Ipsum\n");

    double a1,a2,p1,p2,vol1,vol2;

/* receiving the input data*/
    printf("Please enter the volume of the first thing : ");
    scanf("%lf", &vol1);
    printf("Please enter the amount : ");
    scanf("%lf", &a1);
    printf("Please enter the price of them : ");
    scanf("%lf", &p1);
    double value1 = vol1*a1/p1;

    /* printing the value 1*/
    printf ("value1 %f unit/baht\n", value1);

    printf("\n");

    printf("Please enter the volume of the second thing : ");
    scanf("%lf", &vol2);
    printf("Please enter the amount : ");
    scanf("%lf", &a2);
    printf("Please enter the price of them : ");
    scanf("%lf", &p2);
    double value2 = vol2*a2/p2;

     /* printing the value 2*/
    printf ("value2 %f unit/baht\n", value2);

    printf("\n");
    printf(".=====================================.\n");
    printf("|                                     |\n");

    if (value1 > value2) {
        printf("       %f > %f \n\nThe first item is more valueable!\n", value1, value2);
    } else if (value1 < value2) {
        printf("       %f < %f \n\nThe second one is more valueable than the first!\n", value1, value2);
    } else {
        printf("          %f %f \n\n        Both value are equal!\n",value1, value2);
    }

    printf("|                                     |\n");
    printf(".=====================================.\n");

    if (value1 > value2) {
        double saved = p2 *(vol1*a1)/(vol2*a2) - p1;
        printf("saved : %f baht!\n", saved);
        } else if (value1 < value2) {
        double saved = p1 *(vol2*a2)/(vol1*a1) - p2;
        printf("saved : %f baht!\n", saved);
        }

   //     double num1, num2, num3;
   // scanf("%lf %lf %lf", &num1, &num2, &num3);
   //printf("%f %f %f",num1 ,num2, num3);

   system("pause");
   return 0;
}
