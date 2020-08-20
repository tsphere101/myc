#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Pi 3.14159265359

int main()
{
    double velocity, angleDegree, acGravity, angleRad;
    acGravity = 9.80665;

    printf("Projectile Trajectory Calculator!\n");
    printf("\n");

    printf("Horizontal distance by given\n");
    printf("Initial Velocity and Angle\n");
    printf("\n");

    //input
    printf("Please insert the initial velocity : ");
    scanf("%lf", &velocity);
    printf("Please insert the initial Angle: ");
    scanf("%lf", &angleDegree);
    printf("\n");

    //angle converter
    angleRad = angleDegree*(Pi/180);
    //calculation
    double xVelo = velocity*cos(angleRad);
    double yVelo = velocity*sin(angleRad);

    double timeTraveled = 2*yVelo/acGravity;

    double longestXpos= xVelo*timeTraveled;
    double highestYpos = yVelo*timeTraveled/2;

    //output
    printf("Furtherest Horizontal Distance is = %f meters\n", longestXpos);
    printf("Highest Vertical Distance is %f = meters\n", highestYpos);
    printf("Time Traveled =
            %f seconds\n", timeTraveled);
    printf("\n");


    system("Pause");

    return 0;
}
