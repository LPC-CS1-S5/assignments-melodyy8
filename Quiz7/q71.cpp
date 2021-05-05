#include <iostream>
#include <cmath>
using namespace std;

bool checkAdj(int Array[], int index);

const int N = 10;

int main()
{
  int Array[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};

  for (int i = 0; i < N; i++)
  {
    if (checkAdj(Array, i))
    {
      cout << "This element: " << Array[i] << " satisfies the conditions\n";
    }
  }
  return 0;
}

bool checkAdj(int Array[], int index)
{
  bool less = false;
  if (index == 0)
  {
    if (abs(Array[index] - Array[index + 1]) < 10)
      less = true;
  }
  else if (index == N - 1)
  {
    if (abs(Array[index] - Array[index - 1]) < 10)
      less = true;
  }
  else
  {
    if ((abs(Array[index] - Array[index + 1]) < 10) && (abs(Array[index] - Array[index - 1]) < 10))
      less = true;
  }
  return less;
}