#include <iostream>
#include <iomanip> //io manipulation
using namespace std;

int main()
{
  //initializing the numbers
  int a = 28;
  int b = 32;
  int c = 37;
  int d = 24;
  int e = 33;
  int sum = a + b + c + d + e; //sum
  double average = sum / 5.0; //average, using a double

  cout << setprecision(3);
  cout << "Sum: " << sum << "\n";
  cout << "Average: " << average << "\n";
  return 0;
}