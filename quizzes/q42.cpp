#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float distance, rate, weight;

  cout << "Please enter the weight and distance: \n";
  cin >> weight >> distance;
  if (distance < 10 || distance > 3000 || weight <= 0 || weight > 20)
  {
    cout << "Invalid input!\n";
    return 0;
  }
  else if (weight <= 2)
  {
    rate = 1.10;
  }
  else if (weight <= 6)
  {
    rate = 2.20;
  }
  else if (weight <= 10)
  {
    rate = 3.70;
  }
  else
  {
    rate = 4.80;
  }

  float totalCharge;
  totalCharge = ( distance / 500.00 ) * rate;

  cout << fixed << setprecision(2) << "Total charge: $" << totalCharge << endl;
  return 0;
}