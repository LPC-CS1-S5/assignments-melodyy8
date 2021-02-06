#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  unsigned seed = time(0);
  srand(seed);
  float num1, num2, num3;

  num1 = rand() % 100;
  num2 = rand() % 100;
  num3 = rand() % 100;

  float sum = num1 + num2 + num3;
  float average = sum / 3;

  cout << setprecision(2) << fixed << "Sum: " << sum << endl;
  cout << "First number: " << num1 << endl;
  cout << "Second number: " << num2 << endl;
  cout << "Third number: " << num3 << endl;
  return 0;
}