#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  const int NUMCOURSE = 2;

  ifstream ifs;

  struct student 
  {
    int Id;
    string name;
    int score[NUMCOURSE];
    int sum;
    int average;
  };

  student s[10];
  int i = 0;

  ifs.open("students.txt");

  while (i < 10)
  {
    s[i].sum = 0;
    s[i].average = 0;
    ifs >> s[i].Id;
    cout << " ID : " << s[i].Id << endl;
    cout << " name : " << s[i].name << endl;
    for(int j = 0; j < NUMCOURSE; j++)
    {
      ifs >> s[i].score[j];
		cout << " score : " << s[i].score[j] << endl;
      s[i].sum += s[i].score[j];
    }
    cout << " Sum : " << s[i].sum << endl;
    s[i].average = s[i].sum / 2;
	  cout << " Average : " << s[i].average << endl;
    i++;
  } 

  ifs.close();
  }


  while/for
  if (s[i].name == userinput)
  
}