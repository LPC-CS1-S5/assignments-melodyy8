#include <iostream>
using namespace std;

int main()
{
  float temp;

  cout << "Please enter the temperature in Fahrenheit:" << endl;
  cin >> temp;

  if (temp <= 32)
    cout << "It is freezing!" << endl;
  else if (temp <= 60)
    cout << "It is cold!" << endl;
  else if (temp <= 80)
    cout << "It is cool!" << endl;
  else if (temp <= 90)
    cout << "It is warm!" << endl;
  else
    cout << "It is hot!" << endl;
  return 0;
}