#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;
  string s;
  string text;
  int sum = 0;

  ifs.open("python.txt");
  if (!ifs)
  {
    cout << "Open Error\n";
    exit(0);
  }

  while (!ifs.eof())
  {
    ifs >> s;
    for (int i = 0; i < s.length() - 1; i++)
    {
      if (s[i] == 't' || s[i] == 'T')
      {
        if (s[i + 1] == 'h')
        {
          sum += 1;
        }
      }
    }
  }

  cout << "There are " << sum << " instances of 'th' in the text file." << endl;
  return 0;
}