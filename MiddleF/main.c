
#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d", &a);
	scanf("%d", &b);


	if (a > b) {
		double mid = b+(a-b)/2;
		printf("%f\n", mid);
		}
	else if (a < b) {
		double mid = a+((b-a)/2);
		printf("%f\n", mid);
		}
		else {printf("Both Value is equal!\n");

		}
		system("Pause");
return 0;

}
