#include <iostream>

int main() {
  
  int year;
  std::cout << "Enter the year:";
  std::cin >> year;
  if(year >= 1000 && year <= 9999)
  {
    if((year % 4 == 0 && year% 100 != 0)|| year%400 == 0)
    {
      std::cout << year << " Falls on leap year.\n";
    }
    else std::cout << year << " Not fall on leap year.\n";
  }

  else
  std::cout << "Invalid entry.\n";
  return 0;
}