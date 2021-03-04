#include <iostream>
using namespace std;

int main()
{
  int begin;
  int end;
  int i = -1;

  cout << "Please enter the lower and upper limits: " << endl;
  cin >> begin >> end;

  if (begin > end || begin < 0 || end > 100)
  {
    cout << "Invalid input(s)! :(" << endl;
    exit(0);
  }

  do
  {
    i += 1;
  } while (i < begin);

  cout << "The even numbers in this range are: " << endl;

  do
  {
    if (i % 2 == 0)
      {
        cout << i << endl;
      }
    i += 1;
  } while (i <= end);

  return 0;
}