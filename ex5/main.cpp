#include <iostream>

using namespace std;

int main()
{
  char sentence[100];

  for (int i = 0; i < 100; i++)
    {
      sentence[i] = '\0';
    }

  cout << "Input a sentence:" << endl;
  cin.getline(sentence, 99);

  for (int i = 0; sentence[i] != '\0'; i++)
    {
      if (((i == 0) || (sentence[i - 1] == ' ')) && (sentence[i] != ' ') && (sentence[i + 2] != ' ') && (sentence[i + 3] != ' ') && ((sentence[i + 4] == ' ') || (sentence[i + 4] == '.') || (sentence[i + 4] == ',') || (sentence[i + 4] == '!') || (sentence[i + 4] == '\0') || (sentence[i + 4] == '?')))
	{
	  sentence[i] = 'l';
	  sentence[i + 1] = 'o';
	  sentence[i + 2] = 'v';
	  sentence[i + 3] = 'e';
	  i += 3;
	}
    }

  cout << sentence << endl;

  return 0;
}
