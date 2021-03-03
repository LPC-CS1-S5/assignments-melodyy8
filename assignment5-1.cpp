#include <iostream>
using namespace std;

int main()
{
  //part 1
  cout << "------------------Part 1------------------\n";

  int exponent;
  int counter;
  double total = 1.0;

  cout << "Please enter the exponent: " << endl;
  cin >> exponent;
  counter = exponent;

  if (exponent == 0)
  {
    cout << "Your answer is: " << total << endl;
  }

  else 
  {
    if (exponent > 0)
    {
      while (counter > 0)
        {
          total *= 2;
          counter -= 1;
        }
    }
    else
    {
      while (counter < 0)
      {
        total /= 2;
        counter += 1;
      }
    }
    cout << "Your answer is: " << total << endl;
  }

  //part 2
  cout << "------------------Part 2------------------\n";
  int upper;
  int lower;
  int curr = 2;
  
  cout << "Please enter the lower and upper limits: " << endl;
  cin >> lower >> upper;

  while (curr < lower)
  {  
    curr *= 2;
  }

  cout << "The powers of 2 in this range are: " << endl;

  while (curr <= upper)
  {
    cout << curr << endl;
    curr *= 2;
  }

  return 0;
}