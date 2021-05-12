#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool isAlphabet(char c);

int main()
{
  string input;
  bool valid;
  int length = 0;
  cout << "Please enter your user email: \n";
  cin >> input;

  if (!isAlphabet(input[0]))
  {
    valid = false;
  }

  char validate[input.length()];

  for (int i = 0; input[i] != '@'; i++)
  {
    length += 1;
  }

  if (!( 5 <= length <= 15))



}

bool isAlphabet(char c)
{
  if ('A' <= c <= 'Z' || 'a' <= c <= 'z')
  {
    return true;
  }
  return false;
}