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
    cout << "Written into the file: \n";
    std::getline(ifs, g.last, ',');
    cout << g.last << endl;
    std::getline(ifs, g.first, ',');
    cout << g.first << endl;
    std::getline(ifs, g.ssn, ',');
    cout << g.ssn << endl;
    for (int j = 0; j < N; j++)
    {
      std::getline(ifs, line, ',');
      cout << "score " << line << endl;
      g.score.sc[j] = std::stod(line);
    }
    std::getline(ifs, g.score.grade);
    cout << g.score.grade << endl;
    //writing into bin file
    cout << "Size of structure " << sizeof(Grade) << endl;
    ofs.write( (char *)&g, sizeof(g));

    i++;
  }
  
  ifs.close();
  ofs.close();
  return 0;
}