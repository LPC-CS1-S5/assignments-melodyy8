#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
  int num_males, num_females;
  int total;

  cout << "How many males are in the class?" << endl;
  cin >> num_males;
  cout << "How many females are in the class?" << endl;
  cin >> num_females;

  total = num_males + num_females;
  double percentage_males = (static_cast<double>(num_males) / total) * 100;
  double percentage_females = (static_cast<double>(num_females) / total) * 100;

  cout << setprecision(2) << fixed << "Percentage of males: " << percentage_males << "%\n";
  cout << setprecision(2) << fixed << "Percentage of females: " << percentage_females << "%\n";
  return 0;
}