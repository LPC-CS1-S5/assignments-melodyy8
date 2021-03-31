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

}

int getRdnum()
{
  unsigned seed = time(0);
  srand(seed);
  toReturn = rand() % 99;
  return toReturn;
}

int getRdnum()
{
  unsigned seed = time(0);
  srand(seed);
  toReturn = rand() % 100;
  return toReturn;
}