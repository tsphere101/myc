#include <iostream>

int main() {
  
  double height, weight, bmi;
  while(1) {
  // Ask user for their height
  
  std::cout << "Type in your height (cm): ";
  std::cin >> height;
  if (height == -1) break;
  std::cout << "Type in your weight (kg):";
  std::cin >> weight;
  // Now ask the user for their weight and calculate BMI
  
  
  bmi = weight/((height/100)*(height/100));

  std::cout << "BMI is :" << bmi << "\n";
  
  }
  
  
  
  
  
  return 0;

}