#include <iostream>
using namespace std;

void getListPrime(int = 0, int = 100);

int main()
{
  int begin, end;
  cout << "Please enter the lower and upper limits: \n";
  cin >> begin >> end;

  if (begin == end)
  {
    getListPrime(begin);
  }
  else if (begin > end)
  {
    getListPrime();
  }
  else 
  {
    getListPrime(begin, end);
  }
  return 0;
}

void getListPrime(int begin, int end)
{
  int i = 0;
  bool isPrime;
  while (i < 2 || i < begin)
  {
    i += 1;
  }
  for (i; i < end; i++)
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