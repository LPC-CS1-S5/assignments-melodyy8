#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

int getRdnum(void);
int getRdnum(int);
int getRdnum(int, int);
int toReturn;

int main()
{
  int r = getRdnum();
  cout << r << endl;
  return 0;
}

int getRdnum()
{
  unsigned seed = time(0);
  srand(seed);
  toReturn = rand() % 100 + 1;
  return toReturn;
}

int getRdnum(int n)
{
  unsigned seed = time(0);
  srand(seed);
  toReturn = rand() % n + 1;
  return toReturn;
}

int getRdnum(int n1, int n2)
{
  unsigned seed = time(0);
  srand(seed);
  toReturn = rand() % (n2 - n1 + 1) + n1;
  return toReturn;
}