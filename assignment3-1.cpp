#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int classa;
  int classb;
  int classc;
  double classa_price = 15.00;
  double classb_price = 12.00;
  double classc_price = 9.00;

  cout << "Enter the number of Class A Seats: " << endl;
  cin >> classa;
  cout << "Enter the number of Class B Seats: " << endl;
  cin >> classb;
  cout << "Enter the number of Class C Seats: " << endl;
  cin >> classc;

  double total_price = (classa * classa_price) + (classb * classb_price) + (classc * classc_price);
  cout << setprecision(2) << fixed << "Total Price: $" << total_price << endl;
  return 0;
  }