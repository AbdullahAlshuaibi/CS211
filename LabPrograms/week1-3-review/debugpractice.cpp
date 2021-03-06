// CS211 Yoshii Debugging Lab - with a string array

// INSTRUCTION:
// Find all syntax errors and bugs, and correct them
// MUST ADD A COMMENT TO EACH LINE YOU FIXED EXPLAINING WHAT WAS DONE
// In all files, ** indicate places where you need to add something

// Your name: Abdullah **

#include<iostream>
#include<string>
using namespace std;

//## functions should under the main. 
//## I put the prototypes 
void getData(string S[], int size);
void showData(string S[], int size);
int search(string S[], int size, string name);
int main()
{
  string StuList[5]; // up tp 5 students can be stored
  int i;  // the search result

  getData(StuList, 5);
  cout << "Here it is in reversed order" << endl;
  showData(StuList, 5);

  i = search(StuList, 5, "Mary");
  if (i > -1) 
    cout << "Mary found in slot " << i << endl;
  else //## else should be by itself in a line
    cout << "Mary was not found." << endl;

  return 0;

}
// gets data from the user to fill S with student names
void getData(string S[], int size)
{ //##
  for (int i = 0; i < size ; i++)
    {
      cout << "Enter student name: ";
      cin >> S[i];
    }
}

// displays S in reversed order
void showData(string S[], int size)
{
  for (int i = 0; i <size ; i++)
    {
      cout << S[i] << endl;
    }
}

// searches through S looking for name and return its location or -1
// if not found
int search(string S[], int size, string name)
{
  for (int i =size-1; i >=0 ; i--)
    {
      if (S[i] == name) 
	return i;
             
      //## return should be new line
    }
  return -1;
}
