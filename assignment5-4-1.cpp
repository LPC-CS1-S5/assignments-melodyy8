#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
  int n, r;
  unsigned seed = time(0);
  srand(seed);
  ofstream ofs;

  cout << "Please enter the number of random numbers that you would like: " << endl;
  cin >> n;

  ofs.open("numbers.txt");
  if (ofs.fail())
  {
    cerr << "File Open Error";
    exit(0);
  }

  for (int i = 0; i < n; i++)
   {
    r = rand() % 100;
    ofs << r << endl;
    if (!(ofs.fail()))
      cout << r << " has written into the file\n";
   }

  ofs.close();

  return 0;
}