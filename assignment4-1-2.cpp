#include <iostream>
using namespace std;

int main()
{
  const float RATE02 = 1.10;
  const float RATE26= 2.20;
  const float RATE610 = 3.70;
  const float RATE1020 = 4.80;

  float rate;
  float weight;
  float distance;
  float charge;

  cout << "Please enter the weight and the distance: " << endl;
  cin >> weight >> distance;

  if ((weight < 0 || weight > 20) || (distance < 10 || distance > 3000))
    exit(0);

  else if (weight < 2)
    rate = RATE02;

  else if (weight < 6)
    rate = RATE26;

  else if (weight < 10)
    rate = RATE610;

  else if (weight < 20)
    rate = RATE1020;

  if (distance < 500)
    charge = rate;

  else
    charge = (distance / 500) * rate;

  cout << "Charge: " << charge << endl;
  cout << "Distance: " << distance << endl;
  cout << "Weight: " << weight<< endl;
  return 0;
}