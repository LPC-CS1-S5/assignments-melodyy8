#include <iostream>
using namespace std;

int main()
{
  int entered;
  cout << "Please enter an integer:" << endl;
  cin >> entered;

  if (entered >= 0) 
    {
      if (entered % 2 == 0)
        {
          cout << entered << " is a non-negative even number" << endl;
        }
      else
        cout << entered << " is a non-negative odd number" << endl;
    }
  else 
    {
      cout << entered << " is a negative number" << endl;
    }
  return 0;
}