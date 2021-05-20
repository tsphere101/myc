#include <stdio.h>
#include <math.h>
#define PI 3.142857
#define G 9.807
double quadraticAns(double a, double b, double c);
double XandVTimeUsed(double xDis, double v);
double angleAndVeloTimeUsed(double v, double angle);
double xDistanceVTA(double v, double time, double angle);
double DegToRad(double deg);
double Vy(double v, double angle);
double Vx(double v, double angle);

int main()
{
    double initVelo, angle, time, height, tpd, xDis;
    //input
    printf("Enter the value\n(if unknown enter - 1)\n");
    printf("Initial Speed : ");
    scanf("%lf", &initVelo);
    printf("Angle in degree : ");
    scanf("%lf", &angle);
    printf("Time Traveled : ");
    scanf("%lf", &time);
    printf("Total Distance Traveled : ");
    scanf("%lf", &tpd);
    printf("Horizontal Distance : ");
    scanf("%lf", &xDis);

    //info conditional + calculation
    if (time == -1 && angle != 0 && initVelo != 0)
    {
        time = angleAndVeloTimeUsed(initVelo, angle);
    }
    if (time == -1 && xDis!= 0 && initVelo != 0){ time = }

    
    //output
    printf("==Result==\n");
    printf("Time used : %f\n", time);
    printf("Horizontal Distance : %f\n", xDistanceVTA(initVelo, time, angle));
}

double Vx(double v, double angle)
{
    return v * cos(DegToRad(angle));
}

double Vy(double v, double angle)
{
    return v * sin(DegToRad(angle));
}

double DegToRad(double deg)
{
    double result = deg * PI / 180;
    return result;
}

double xDistanceVTA(double v, double time, double angle)
{
    double result = v * cos(DegToRad(angle)) * time;
    return result;
}

double angleAndVeloTimeUsed(double v, double angle)
{
    double result = 2 * Vy(v, angle) / G;
    return result;
}

double XandVTimeUsed(double xDis, double v)
{
    double result = xDis / v;
    return result;
}

double quadraticAns(double a, double b, double c)
{
    double x1 = (-b + sqrt(b * b - (4 * a * c))) / 2 * a;
    double x2 = (-b - sqrt(b * b - (4 * a * c))) / 2 * a;
    if (x1 > 0)
    {
        return x1;
    }
    else
    {
        return x2;
    }
}