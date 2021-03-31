#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

int getRdnum(void);
int isGreater(int n);

int main()
{
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

}