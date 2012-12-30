#include <iostream>

using namespace std;

int main()
{
  char sentence[101] = {'\0'};
  
  cout << "Please input a sentence." << endl;
  cin.getline(sentence, 100);

  //capitalise first letter if necessary
  if (static_cast<int>(sentence[0]) > 60)
    {
      sentence[0] = static_cast<int>(sentence[0]) - 32;
    }

  //uncapitalise other letters if necessary
  for(int i = 1; sentence[i] != '\0'; i++)
    {
      if ((static_cast<int>(sentence[i]) > 64) && (static_cast<int>(sentence[i]) < 90) )
	{
	  sentence[i] = static_cast<int>(sentence[i]) + 32;
	}
    }

  //compress ws
  for(int i = 1; sentence[i] != '\0'; i++)
    {
      if ((sentence[i] == ' ') && (sentence[i + 1] == ' '))
	{
	  for (int j = (i + 1); sentence[j] != '\0'; j++)
	    {
	      sentence[j] = sentence[j + 1];
	    }
	  i--;
	}
    }

  cout << sentence << endl;

  return 0;
}
