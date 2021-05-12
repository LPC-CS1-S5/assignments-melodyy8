#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;
  string s;
  string text;

  while (!ifs.eof())
  {
    ifs >> s;
    text = text + s;
    cout << text << endl;
  }
  for(int i = 0; i < text.length(); i++)
  {
    continue;
  }
}