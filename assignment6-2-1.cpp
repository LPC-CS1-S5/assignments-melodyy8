#include <iostream>
using namespace std;

int evenSumGet(int);
int oddSumGet(int);

int main()
{
  int evenSum = 0, oddSum = 0;
  int input;

  do 
  {
    cout << "Please enter your input: \n";
    cin >> input;
    if (input == -1)
    {
      break;
    }
    else if (input % 2)
    {
      oddSum = oddSumGet(input);
    }
    else 
    {
      evenSum = evenSumGet(input);
    }
  } while (1);

  cout << "The sum of all odd inputs is: " << oddSum << endl;
  cout << "The sum of all even inputs is: " << evenSum << endl;

  return 0;
}

int oddSumGet(int n)
{
  static int oddS = 0;
  oddS += n;
  return oddS;
}

int evenSumGet(int n)
{
  static int evenS = 0;
  evenS += n;
  return evenS;
}
