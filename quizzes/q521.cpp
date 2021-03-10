#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int n, rdnum;
  int minimum = 100;
  cout << "How many random numbers would you like?\n";
  cin >> n;
  srand(time(0));
  for (int i = 0; i < n; i++)
  {
    rdnum = rand( ) % 100; 
    if (rdnum < minimum)
    {
      minimum = rdnum;
    }
    cout << rdnum << " was generated\n";
  }
  cout << "The minimum is " << minimum << endl;
  return 0;
}