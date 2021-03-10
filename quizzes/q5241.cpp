#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream ofs;
  int N;
  int id;
  string name, dep;
  double salary;

  ofs.open("employee.txt");
  if (ofs.fail())
  {
    cerr << "File Open Error";
    exit(0);
  }

  cout << "Please enter the number of employees: \n";
  cin >> N;
  ofs << N << endl;
  
  for (int i = 0; i < N; i++)
  {
    cout << "Please enter the ID, name, department, and salary for this employee, in that order: \n";
    cin >> id >> name >> dep >> salary;
    ofs << id << endl;
    ofs << name << endl;
    ofs << dep << endl;
    ofs << salary << endl;
    if (!(ofs.fail()))
    {
      cout << id << ", " << name << ", " << dep << ", and " << salary << " were written into the file\n"; 
    }
  }

  ofs.close();
  return 0;
}