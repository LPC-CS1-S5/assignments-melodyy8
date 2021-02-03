#include <iostream>
#include <iomanip> //io manipulation
using namespace std;

int main()
{
  double meal_cost = 88.67; //given
  double tax = meal_cost * 0.0675; //tax
  double subtotal = meal_cost + tax; //meal plus tax
  double tip = subtotal * 0.2; //tip
  double total = subtotal + tip; //total meal_cost

  //changing precision points to account for decimals
  //and numbers of differing lengths
  cout << setprecision(4);
  cout << "Meal Cost: $" << meal_cost << "\n";
  cout << setprecision(3);
  cout << "Tax: $" << tax << "\n";
  cout << setprecision(4);
  cout << "Tip: $" << tip << "\n";
  cout << setprecision(5);
  cout << "Total Cost: $" << total << "\n";
  return 0;
}