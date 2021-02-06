#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  string month1, month2, month3;
  float rainm1, rainm2, rainm3, average;

  cout << "Enter the first month and rain amount: \n";
  cin >> month1 >> rainm1;
  cout << "Enter the second month and rain amount: \n";
  cin >> month2 >> rainm2;
  cout << "Enter the third month and rain amount: \n";
  cin >> month3 >> rainm3;

  average = (rainm1 + rainm2 + rainm3) / 3.0;

  cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << endl;
  return 0;
}