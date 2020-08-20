//Distance Between us
#include <stdio.h>
int main()
{
    double Apos, Bpos, Cpos;
    scanf("%lf", &Apos);
    scanf("%lf", &Bpos);
    scanf("%lf", &Cpos);


    double dis1 = (Bpos - Apos), dis2 = (Cpos - Bpos), dis3 = (Cpos - Apos);

    //abs
    if(dis1 < 0 ) {dis1 = -dis1}
    if(dis2 < 0 ) {dis2 = -dis2}
    if(dis3 < 0 ) {dis3 = -dis3}

    printf("%.2f\n%.2f\n%.2f", dis1, dis2, dis3);
    return 0;
}