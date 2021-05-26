#include <iostream>
#include <fstream>
using namespace std;

const unsigned short N=5;
struct Scores
{     
  double sc[N];     
  string grade;
};

struct Grade
{    
  string first;    
  string last;   
  string ssn;   
  Scores score;
};



int main()
{
  //reading from txt file
  ifstream ifs;
  ofstream ofs;

  Grade g;
  string line;

  ifs.open("Final/grades.txt");
  ofs.open("Final/grades.bin");

  int i = 0;

  while (i < 16)
  {
    std::getline(ifs, g.last, ',');
    std::getline(ifs, g.first, ',');
    std::getline(ifs, g.ssn, ',');
    string score;
    for (int j = 0; j < N; j++)
    {
      std::getline(ifs, line, ',');
      g.score.sc[j] = std::stod(line);
    }
    std::getline(ifs, g.score.grade, ',');
    
    //writing into bin file
    cout << "Size of structure " << sizeof(Grade) << endl;
    ofs.write( (char *)&g, sizeof(g));

    i++;
  }

  ofs.close();
  cout << line << endl;
  return 0;
}