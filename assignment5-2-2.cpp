#include <iostream>
using namespace std;

int main()
{
  int N;
  string stuName;
  double score1, score2;
  double stuSum, stuAvg, tSum;

  cout << "How many students are there?\n";
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cout << "Please enter the student's name: \n";
    cin >> stuName;
    cout << "Please enter two of the student's scores: \n";
    cin >> score1 >> score2;

    stuSum = (score1 + score2);
    tSum += stuSum;
    stuAvg = stuSum / 2.0;
    cout << stuName << "'s sum is: " << stuSum << " and average is: " << stuAvg << endl;
  }

  cout << "The total sum is: " << tSum << endl;

  return 0;
}