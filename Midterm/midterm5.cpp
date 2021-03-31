#include <iostream>
#include <fstream>
using namespace std;

void getInput();
int isSame();
int intDivision(int, int);
void fileWrite(int);
int n1, n2;
ofstream ofs;

int main()
{
  cout << "--------------------------------------\n";
  cout << "Welcome to division calculator!\n";
  cout << "--------------------------------------\n";

  ofs.open("question5.txt");
  if (ofs.fail())
  {
    cerr << "File Open Error\n";
    exit(0);
  }

  getInput();
  int result;
  while (!isSame())
  {
    if (n1 > n2)
    {  
      result = intDivision(n1, n2);
    }
    else
    {
      result = intDivision(n2, n1);
    }
    fileWrite(result);
    getInput();
  }
  return 0;
}

void getInput()
{
  cout << "Please enter two integers: \n";
  cin >> n1 >> n2;
}

int isSame()
{
  if (n1 == n2)
    return 1;
  return 0;
}

int intDivision(int a, int b)
{
  return a / b;
}

void fileWrite(int res)
{
  ofs << res << endl;
}
