#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream ofs;
  int N;
  string stuName;
  double score1, score2;

  ofs.open("stuRecord.txt");
  if (ofs.fail())
  {
    cerr << "File Open Error";
    exit(0);
  }

  cout << "How many students are there?\n";
  cin >> N;

  ofs << N << endl;

  for (int i = 0; i < N; i++)
  {
    cout << "Please enter the student's name: \n";
    cin >> stuName;
    cout << "Please enter two of the student's scores: \n";
    cin >> score1 >> score2;

    ofs << stuName << endl;
    ofs << score1 << endl;
    ofs << score2 << endl;
    if (!(ofs.fail()))
      cout << stuName << ", " << score1 << ", and " << score2 << " were written into the file\n";
  }
  ofs.close();
  return 0;
}