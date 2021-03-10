#include <iostream>
using namespace std;

int main()
{
  int i, j;
  cout << "Please enter the indices: \n";
  cin >> i >> j;

  //part 1
  for (int a = 0; a <= i; a++)
  {
    for (int b = 0; b <= a; b++)
    {
      cout << a << ", " << b << endl;
    }
  }

  cout << "----------------------\n";

  //part 2
  for (int a = 0; a <= i; a++)
  {
    for (int b = a; b <= j; b++)
    {
      cout << a << ", " << b << endl;
    }
  }

  cout << "----------------------\n";

  //part 3
  for (int a = 0; a <= i; a++)
  {
    for (int b = j - a; b <= j; b++)
    {
      cout << a << ", " << b << endl;
    }
  }

  return 0;
}