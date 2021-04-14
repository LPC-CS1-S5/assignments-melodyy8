#include <iostream>
using namespace std;

void swapTwoValues(int n1, int n2);
void swapTwoValues(float f1, float f2);

int main()
{
  int answer;
  cout << "Please enter 0 if you would like to swap two integers, or 1 if you would like to swap two floats: \n";
  cin >> answer;
  if (!answer)
  {
    int n1, n2;
    cout << "Please enter two integers to be swapped: \n";
    cin >> n1 >> n2;
    swapTwoValues(n1, n2);
  }
  else 
  {
    float f1, f2;
    cout << "Please enter two floats to be swapped: \n";
    cin >> f1 >> f2;
    swapTwoValues(f1, f2);
  }
  return 0;
}

void swapTwoValues(int n1, int n2)
{
  int temp = n2;
  n2 = n1;
  n1 = temp;
  cout << "The first integer is now: " << n1 << ", and the second integer is now: " << n2 << endl;
}

void swapTwoValues(float f1, float f2)
{
  float temp = f2;
  f2 = f1;
  f1 = temp;
  cout << "The first float is now: " << f1 << ", and the second float is now: " << f2 << endl;
}