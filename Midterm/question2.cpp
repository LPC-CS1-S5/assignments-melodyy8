#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;
  ifs.open("students.txt");
  if (!ifs)
  {
    cerr << "File Open Error\n";
    exit(0);
  }

  string stuName;
  int score1, score2;
  int sum;
  double avg;
  int counter = 0;
  while (ifs >> stuName >> score1 >> score2)
  {
    sum = score1 + score2;
    avg = sum / 2.0;
    if (avg > 80)
    {
      counter += 1;
    }
    cout << "Student name: " << stuName << " Score 1: " << score1 << " Score 2: " << score2 << " Sum: " << sum << " Average: " << avg << endl; 
  }
  cout << "The total number of students who has the average > 80: " << counter << " students\n";
}