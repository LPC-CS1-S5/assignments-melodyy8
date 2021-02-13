#include <iostream>
using namespace std;

int main()
{
  const float PERC019 = 0.2;
  const float PERC2049 = 0.3;
  const float PERC5099 = 0.4;
  const float PERC100 = 0.5;

  float dRate;
  int quantity;
  int originalPrice = 99;

  cout << "Please enter the quantity: " << endl;
  cin >> quantity;

  if (quantity < 0) 
    exit(0);

  else if (quantity >= 0 && quantity <= 19) 
    dRate = PERC019;

  else if (quantity < 49)
    dRate = PERC2049;

  else if (quantity < 99)
    dRate = PERC5099;

  else if (quantity > 100)
    dRate = PERC100;

  float original = quantity * originalPrice;
  float discount = originalPrice * dRate;
  float final_price = originalPrice - discount;

  cout << "Original price: " << original << endl;
  cout << "Discount: " << discount << endl;
  cout << "Final price: " << final_price << endl;
  return 0;
}
