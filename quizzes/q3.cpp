#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() 
{
  double num1, num2, num3; //declaring number variables

  srand(time(0)); //setting seed for srand() and rand()
  num1 = rand();  //generating random numbers
  num2 = rand();
  num3 = rand();

  //declaring and initializing sum and average variables
  double sum = num1 + num2 + num3;  
  double average = sum / 3.0;

  //printing out the results
  cout << "The three numbers are: " << endl;
  cout << setprecision(5) << num1 << " " << num2 << " " << num3 << endl;
  cout << "The sum is: " << setprecision(5) << sum << endl;
  cout << "The average is: " << setprecision(5) << average << endl;
  return 0;
}