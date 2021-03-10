#include <iostream>
using namespace std;

int main()
{
  int begin, end;
  int i = 0;
  bool isPrime;

  cout << "Please enter the lower and upper limits: " << endl;
  cin >> begin >> end;

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
  return 0;
}