#include <iostream>
using namespace std;

double nthpowerp(int n);
double nthpowern(int n);

int main()
{
  int exponent;
  int counter;
  double total = 1.0;

  cout << "Please enter the exponent: " << endl;
  cin >> exponent;
  counter = exponent;

  if (exponent == 0)
  {
    cout << "Your answer is: " << total << endl;
    exit(0);
  }

  else 
  {
    if (exponent > 0)
    {
      total = nthpowerp(exponent);
    }
    else
    {
      total = nthpowern(exponent);
    }
  }
  cout << "Your answer is: " << total << endl;
  return 0;
}

double nthpowerp(int n)
{
  double total = 1;
  while (n > 0)
  {
    total *= 2;
    n -= 1;
  }

  return total;
}

double nthpowern(int n)
{
  double total = 1;
  while (n < 0)
  {
    total /= 2;
    n += 1;
  }

  return total;
}