#include <iostream>
using namespace std;

int main()
{
  double regular_price = 59.95;
  double discount = regular_price * 0.2;
  double sale_price = regular_price - discount;

  cout << "Regular price: $" << regular_price << "\n";
  cout << "Discount amount: $" << discount << "\n";
  cout << "Sale price: $" << sale_price << "\n"; 
  return 0;
}