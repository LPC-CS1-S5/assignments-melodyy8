#include <iostream>
using namespace std;

int inputValid(int lower, int upper);
void getListPrime(int lower, int upper);

int main()
{
  int begin, end, res;
  cout << "Please enter the lower and upper limits: " << endl;
  cin >> begin >> end;

  res = inputValid(begin, end);
  if (!res)
  {
    exit(0);
  }

  getListPrime(begin, end);

  return 0;
}

int inputValid(int lower, int upper)
{
  if (lower < upper && lower > 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void getListPrime(int lower, int upper)
{
  int i = 0;
  bool isPrime;

  while (i < 2 || i < lower)
  {
    i += 1;
  }
  for (i; i < upper; i++)
  {
    isPrime = true;
    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
      {
        isPrime = false;
      }
    }
    if (isPrime)
        cout << i << " is prime\n";
  }
}
