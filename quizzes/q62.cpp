#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void gerRandnum(int &n1, int &n2, int &n3);
// In this function, generate three random numbers and assign the values to the parameter n1, n2, and n3

int  findMin(int n1, int n2, int n3); 
// The return value : the min among n1, n2 and n3.

void printResult(int n1, int n2, int n3, int min);
// Print out the results with the original numbers and the minimum value

int main()
{
  int n1, n2, n3;
  gerRandnum(n1, n2, n3);
  int min;
  min = findMin(n1, n2, n3);
  printResult(n1, n2, n3, min);
  return 0;
}

void gerRandnum(int &n1, int &n2, int &n3)
{
  unsigned seed = time(0);
  srand(seed);
  n1 = rand();
  n2 = rand();
  n3 = rand();
}

int findMin(int n1, int n2, int n3)
{
  if (n1 < n2)
  {
    if (n1 < n3)
      return n1;
    return n3;
  }
  else if (n3 < n2)
    return n3;
  else
    return n2;
}

void printResult(int n1, int n2, int n3, int min)
{
  cout << "The three integers are: " << n1 << ", " << n2 << ", and " << n3 << endl;
  cout << "The minimum is: " << min << endl;
}