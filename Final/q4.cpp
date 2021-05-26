#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;
  string s;
  int sum = 0;

  string userinput;
  string words = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quibus natura iure responderit non esse verum aliunde finem beate vivendi, a se principia rei gerendae peti; Quae enim adhuc protulisti, popularia sunt, ego autem a te elegantiora desidero. Duo Reges: constructio interrete. Tum Lucius: Mihi vero ista valde probata sunt, quod item fratri puto. Bestiarum vero nullum iudicium puto. Nihil enim iam habes, quod ad corpus referas; Deinde prima illa, quae in congressu solemus: Quid tu, inquit, huc? Et homini, qui ceteris animantibus plurimum praestat, praecipue a natura nihil datum esse dicemus?";

  cout << "Enter user string "; 
  cin >> userinput;
  int ul = userinput.length();

  for (int i = 0; i < words.length(); i++)
  {
    if (words[i] == userinput[0])
    {
      for (int j = 0; j < ul; j++)
      {
        if (words[i + j] != userinput[j])
        {
          break;
        }
        else if (j == ul - 1)
        {
          sum++;
          cout << "Found at " << i << endl;
        }
      }
    }
  }


  cout << sum << endl;
  return 0;
}