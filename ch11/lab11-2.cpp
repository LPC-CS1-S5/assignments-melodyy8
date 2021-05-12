#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  //from chat

  for(int i=0; i<strlen(str); i++)
	{
		str[i] = tolower(str[i]);
	}

  int exact = strcmp(readline, userinput);
	if (exact == 0)
		return true;
	else
		return false;
}

bool partialmatch(char readline[], char userinput[]) {
	char *partmatch;
	partmatch = strstr(readline, userinput);
	if (partmatch != NULL)
		return true;
	else
		return false;
}



}