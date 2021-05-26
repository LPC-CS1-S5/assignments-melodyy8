#include<iostream>
#include<string>
using namespace std;

int main()
{
  const int SIZE1=5;
  const int SIZE2=10;
  int numbers1[SIZE1] = {2, 3, 5, 9, 10};
  int numbers2[SIZE2] = {1, 2, 3, 5, 9, 10, 11, 13, 15, 17};

  int i = 0, j = 0;

  while(i < SIZE1 && j < SIZE2)
  {
    if (numbers1[i] == numbers2[j])
    {
      i++;
      j++;
    }
    else if (numbers2[j] < numbers1[i])
    {
      i++;
    }
    else if (numbers2[j] > numbers1[i])
    {
      cout << "Numbers1 is not a subset of Numbers2\n";
    }
  }    
    if (i < SIZE1)
    {
      cout << "Numbers1 is not a subset of Numbers2\n";
    }
    else
    {
      cout << "Numbers1 is a subset of Numbers2 :)\n";
    }

  return 0;
}

