#include <iostream>
#include "sexistFuncs.hpp"

using namespace std;

//START OF FUNCTION DEFINITION FOR getInput(char [100])
void getInput(char sentence[])
{
  cout << "Please enter a sexist sentence:" << endl;
  cin.getline(sentence, 99);
}
//END OF FUNCTION DEFINITION

//START OF FUNCTION DEFINITION FOR void cleanUp(char [])
void cleanUp(char sentence[])
{
  char rephis[4] = {'h', 'e', 'r', 's'};
  char rephim[3] = {'h', 'e', 'r'};
  char rephe[3] = {'s', 'h', 'e'};
  char repTail[4] = {' ', 'o', 'r', ' '};
  char temp[100];

  for (int i = 0; i < 100; i++)
    {
      temp[i] = '\0';
    }
  
  for (int i = 0; sentence[i] != '\0'; i++)
    {
      //replace a 'his'
      if ((sentence[i] == 'h') && (sentence[i + 1] == 'i') && (sentence[i + 2] == 's'))
	{
	  for (int j = i, k = 0; sentence[j] != '\0'; j++, k++)
	    {
	      temp[k] = sentence[j];
	    }
	  for (int j = i; j < 100; j++)
	    {
	      sentence[j] = '\0';
	    }
	  for (int j = i, k = 0; j < (i + 4); j++, k++)
	    {
	      sentence[j] = rephis[k];
	    }
	  for (int j = (i + 4), k = 0; k < 4; j++, k++)
	    {
	      sentence[j] = repTail[k];
	    }
	  for (int j = (i + 8), k = 0; temp[k] != '\0'; j++, k++)
	    {
	      sentence[j] = temp[k];
	    }
	  i += 8;
	}
      //replace a 'him'
      if ((sentence[i] == 'h') && (sentence[i + 1] == 'i') && (sentence[i + 2] == 'm'))
	{
	  for (int j = i, k = 0; sentence[j] != '\0'; j++, k++)
	    {
	      temp[k] = sentence[j];
	    }
	  for (int j = i; j < 100; j++)
	    {
	      sentence[j] = '\0';
	    }
	  for (int j = i, k = 0; j < (i + 3); j++, k++)
	    {
	      sentence[j] = rephis[k];
	    }
	  for (int j = (i + 3), k = 0; k < 3; j++, k++)
	    {
	      sentence[j] = repTail[k];
	    }
	  for (int j = (i + 6), k = 0; temp[k] != '\0'; j++, k++)
	    {
	      sentence[j] = temp[k];
	    }
	  i += 6;
	}
      //replace a 'he'
      if ((sentence[i] == 'h') && (sentence[i + 1] == 'e') && (sentence[i + 2] == ' '))
	{
	  for (int j = i, k = 0; sentence[j] != '\0'; j++, k++)
	    {
	      temp[k] = sentence[j];
	    }
	  for (int j = i; j < 100; j++)
	    {
	      sentence[j] = '\0';
	    }
	  for (int j = i, k = 0; j < (i + 3); j++, k++)
	    {
	      sentence[j] = rephe[k];
	    }
	  for (int j = (i + 3), k = 0; k < 3; j++, k++)
	    {
	      sentence[j] = repTail[k];
	    }
	  for (int j = (i + 5), k = 0; temp[k] != '\0'; j++, k++)
	    {
	      sentence[j] = temp[k];
	    }
	  i += 5;
	}
    }
  cout << sentence << endl;
}
//END OF FUNCTION DEFINITION
