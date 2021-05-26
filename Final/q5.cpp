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

  ifs.open("grades.txt");
  

  //writing into bin file

}