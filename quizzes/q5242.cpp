#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;
  int N, id;
  string name, dep;
  double salary, total, average;

  ifs.open("employee.txt");
  if (!ifs)
  {
    cout << "Open Error\n";
    exit(0);
  }

  ifs >> N;
  cout << "There are " << N << " emplooyees\n";
  cout << "----------------------------------\n";
  cout << "ID       Name    Dept.  Salary\n";
  cout << "----------------------------------\n";
  
  total = 0;

  for (int i = 0; i < N; i++)
  {
    ifs >> id >> name >> dep >> salary;
    cout << id << "  " << name << "  " << dep << "  " << salary << endl;
    total += salary;
  }

  average = total / static_cast<double>(N);
  cout << "The total salary is: " << total << " and the average is: " << average << endl;
  ifs.close();

  return 0;
}