#include <iostream>
#include <ctime>
#include <stdlib.h>
int main()
{
srand(time(NULL));
int coin = rand()%2;

if (coin == 0)
{std::cout<< "Head\n";}
else std::cout <<"Tail\n";

double peH,peT;
int i =0;
int tails = 0,heads = 0;
do 
{
int coin = rand()%2;

if (coin == 0)
{heads++;std::cout<<"Head\n";}
else {tails++;std::cout<<"Tail\n";}

i++;
}
while(i < 100000);
peH = heads/i;
peT = tails/i;
std::cout << "Head Prob:" << heads <<"\n";
std::cout << "Tail Prob:" << tails<<"\n";
return 0;
}