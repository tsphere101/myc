#include <iostream>

int main() {
  
  int weight;
  double desWeight;
  retryWeight:
  std::cout << "Enter your weight on Earth:";
  std::cin >> weight;
  if(weight < 0) goto retryWeight;

  int planeth;
  std::cout << "Which Planet you want to convert? (1-7)";
  retry :
  std::cin >> planeth;
  if(planeth >= 1 && planeth <= 7)
  {
    switch (planeth)
    {
    case 1 :
      desWeight = 0.38*weight;
      break;
    case 2 :
      desWeight = 0.91*weight;
      break;
    case 3 :
      desWeight = 0.38*weight;
      break;
    case 4 :
      desWeight = 2.34*weight;
      break;
    case 5 :
      desWeight = 1.06*weight;
      break;
    case 6 :
      desWeight = 0.92*weight;
      break;
    case 7 :
      desWeight = 1.19*weight;
      break;
    default : desWeight = 0; break;
    }
  }
  else 
  {
    std::cout << "Only enter 1-7!\n";
    goto retry;

  }

  std::cout << "Your weight will be: " << desWeight;
return 0;
  
  
  
  
  
  
  
  
  
  
}