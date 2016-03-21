#include <iostream>

struct Advertising
{
  int quantity;
  int percentage;
  float earned;
};

void printStruct(Advertising advert)
{
  std::cout << "\nAds shown: " << advert.quantity << endl;
  std::cout << "Percentage viewed: " << advert.percentage << endl;
  std::cout << "Average earned per ad: " << advert.earned << endl;
  std::cout << "Earned total: " << advert.quantity*advert.percentage*advert.earned << endl;
}

int main()
{
  Advertising ads;
  
  std::cout << "Enter ads shown: ";
  std::cin >> ads.quantity;
  std::cout << "Enter percentage viewed: ";
  std::cin >> ads.percentage;
  std::cout << "Enter cash earned per ad: ";
  std::cin >> ads.earned;
  
  printStruct(ads);
  
  return 0;

}
