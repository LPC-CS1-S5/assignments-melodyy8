#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

int getRdnum(void);
int isGreater(int n);

int main()
{
  unsigned seed = time(0);
  srand(seed);
  ofstream ofs;
  ofs.open("numbers.txt");
  if (ofs.fail())
  {
    cerr << "File Open Error\n";
    exit(0);
  }

  int N = 10;
  int r, b;
  for (int i = 0; i < N; i++)
  {
    r = getRdnum();
    b = isGreater(r);
    if (b)
    {
      ofs << r << endl;
    }
  }
}

int getRdnum()
{
  int num = (rand() % 100) / 2;
  return num;
}

int isGreater(int n)
{
  static int preceding = 0;
  int toReturn;
  if (preceding == 0)
  {
    toReturn = 0;
  }
  else 
  {
    if (preceding < n)
    {
      toReturn = 1;
    }
    else 
    {
      toReturn = 0;
    }
  }
  preceding = n;
  return toReturn;
}