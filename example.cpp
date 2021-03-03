#include <iostream>
using namespace std;

int main()
{
  int i, j, result;
  i = 5; j = 10;

  result = ( i < 10) ? j : i ;
  cout << result << endl;
  return 0;
}