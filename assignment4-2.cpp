#include <iostream>
using namespace std;

int main() 
{
  int num1;
  int num2;
  int num3;
  int max;
  int min;
  int other;

  cout << "Please enter 3 numbers: " << endl;
  cin >> num1 >> num2 >> num3;

  if (num1 < num2)
    {
      if (num1 < num3)
        {
          if (num2 < num3)
            {
              max = num3;
              min = num1;
              other = num2;
            }
          else
            {
              max = num2;
              min = num1;
              other = num3; 
            }
        }
      else
        {
          max = num2;
          min = num3;
          other = num1;
        }
    }
  else if (num2 < num3)
    {
      if (num1 < num3)
        {
          max = num3;
          min = num2;
          other = num1; 
        }
      else
        {
          max = num1;
          min = num2;
          other = num3; 
        }
    }
  else
    {
      max = num1;
      min = num3;
      other = num2; 
    }

  cout << "The numbers from smallest to largest are: " << endl;
  cout << min << endl;
  cout << other << endl;
  cout << max<< endl;
  return 0;
}