#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;
  int N;
  string stuName;
  double score1, score2;
  double stuSum, stuAvg;
  double tSum, tAvg;

  ifs.open("stuRecord.txt");
  if (!ifs)
  {
    cout << "Open Error\n";
    exit(0);
  }

  ifs >> N;
  cout << N << " was read from the file\n";

  tSum = 0;

  for(int i = 0; i < N; i++)
  {
    ifs >> stuName;
    ifs >> score1;
    ifs >> score2;
    stuSum = (score1 + score2);
    tSum += stuSum;
    stuAvg = stuSum / 2.0;
    cout << stuName << "'s sum is: " << stuSum << " and average is: " << stuAvg << endl;
  }
  tAvg = tSum / (2.0 * N);
  cout << "The class sum is: " << tSum << " and the class average is: " << tAvg << endl;

  return 0;
}