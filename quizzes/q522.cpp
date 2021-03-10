#include <iostream>
using namespace std;

int main()
{
  int base, power, total;
  cout << "Please enter your base and your exponent: \n"; 
  cin >> base >> power;
  total = 1;
  for (int i = 1; i <= power; i++)
  {
    cout << total << endl;
    total *= base;
  }
  cout << "Your answer is: " << total << endl;
  return 0;
}