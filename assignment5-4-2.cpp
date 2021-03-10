#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;
  int n;

  ifs.open("numbers.txt");

  for(;;)
  {
    ifs >> n;
    if (ifs.eof())
      break;
    cout << n << " was read from the file\n";
  }

  return 0;
}