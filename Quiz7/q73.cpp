#include <iostream>
using namespace std;

int findmax(int number[], int from, int to);

const int N = 10;

int main()
{
  int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};

  int firstHalf = findmax(number, 0, (N / 2) - 1);
  int secondHalf = findmax(number, (N / 2), (N - 1));

  cout << "First half: " << firstHalf << endl;
  cout << "Second half: " << secondHalf << endl;
  return 0;
}

int findmax(int number[], int from, int to)
{
  if (to < from)
  {
    cout << "Error: invalid range!\n";
    exit(0);
  }
  int currMax = number[from];
  for (int i = from; i <= to; i++)
  {
    if (number[i] > currMax)
      currMax = number[i];
  }
  return currMax;
}