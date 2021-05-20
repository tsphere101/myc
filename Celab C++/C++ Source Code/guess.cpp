#include <iostream>
#include <ctime>
int main()
{
  int guess;
  int tries = 0;
  srand(time(NULL));
  for (int i = 0; i < 100; i++)
  {
    std::cout << rand() % 100;
  }
  int initailNumber = rand()%100;
  int number[10];
  //loop array
  for (int i = 0; i < 10; i++)
  {
    number[i] = initailNumber + rand()%10;
    std::cout << "\n"
              << number[i] << "\n";
  }

  std::cout << "\n\n\n"
            << "Guess the number: ";
retry:
  std::cin >> guess;

  //test
  for (int i = 0; i < 10; i++)
  {
    if (guess == number[i])
    {
      std::cout << "Correct! one of the number is " << guess;
      goto win;
    }
  }

  for (int i = 0; i < 10; i++)
  {

    if (guess < number[i])
    {
      std::cout << "More ";
    }
    else if (guess > number[i])
    {
      std::cout << "Less ";
    }
    if(i == 5)
    {
      std:: cout << "\n";
    }
  }
  std::cout << "\nTry again: ";
  goto retry;

  //return

  return 0;
win: {}
  //std::cout << "Correct!" << guess <<" is one of the number ";
}