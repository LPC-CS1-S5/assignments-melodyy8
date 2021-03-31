#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;
  ifs.open("students.txt");
  if (!ifs)
  {
    cerr << "File Open Error\n";
    exit(0);
  }

  while ()
}