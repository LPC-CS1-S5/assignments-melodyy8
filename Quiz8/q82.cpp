#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool validateDomain(string s);

int main()
{
  string input;
  bool valid = true;
  int idLength = 0;
  cout << "Please enter your user email: \n";
  cin >> input;

  if (!isalpha(input[0]))
  {
    valid = false;
  }

  for (int i = 0; input[i] != '@'; i++)
  {
    idLength += 1;
  }

  if (idLength < 5 || idLength > 15)
  {
    valid = false;
  }


  string domain = input.substr(input.length() - 3);
  if (!validateDomain(domain))
  {
    valid = false;
  }

  if (valid)
  {
    cout << "Your email is valid! :)\n";
  }
  else 
  {
    cout << "Sorry! Your email is not valid! :(\n";
  }
  return 0;
}

bool validateDomain(string s)
{
  if (s == "com" || s == "org" || s == "net" || s == 
  "edu" || s == "gov")
  {
    return true;
  }
  return false;
}
