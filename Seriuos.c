#include <stdio.h>

int sumTo (int num)
{
if(num == 0) return 0;
return num + sumTo(num - 1);
}

int main()
{
int num;
while(1){
scanf("%d",&num);
if(num == -1) break;
printf("%d", sumTo(num));
} 
return 0;
}