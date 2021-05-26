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
  Grade g;
  string line;
  ifs.open("grades.txt");
  int i = 0;
  while (i < 16)
  {
    std::getline(ifs, g.last, ',');
    std::getline(ifs, g.first, ',');
    std::getline(ifs, g.ssn, ',');
    string score;
    for (int j = 0; j < N; j++)
    {
      std::getline(ifs, score, ',');
      g.score.sc[j] = stoi(score);
    }
    std::getline(ifs, g.score.grade, ',');
    
    //writing into bin file
    
  }

 

}