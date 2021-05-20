//เอา num หาร 2 ถึง x
#include <stdio.h>
int main(){
int num;
scanf("%d",&num);
int a;
for(int i = 2 ; i <= num;i++)
{
if (num % i == 0) {a = i ;break;}
}
if(a == num) {printf("is Prime");} else {printf("IsNotPrime");}

return 0;
}
