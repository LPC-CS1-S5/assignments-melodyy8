#include <iostream>
using namespace std;

int getSum(int n);

int main()
{
  int n;
  cout << "How many numbers would you like to enter? \n";
  cin >> n;
  if (n <= 0)
  {
    exit(0);
  }
  int res = getSum(n);
  cout << "Your result is: " << res << endl;

  return 0;
}

int getSum(int n)
{
  int number, minimum = INT8_MAX, maximum = INT8_MIN;
  int sum = 0;
  if (n == 0)
  {
    return 0;
  }
  for (int i = 0; i < n; i++)
  {
    cout << "Please enter a number: \n";
    cin >> number;
    if (number < minimum)
    {
      minimum = number;
    }
    else if (number > maximum)
    {
      maximum = number;
    }
    sum += number;
  }
  sum = sum - (minimum + maximum);
  return sum;
}