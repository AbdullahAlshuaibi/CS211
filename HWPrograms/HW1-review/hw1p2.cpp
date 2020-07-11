// CS211 HW1P2 Rule-Based System
// Always look for ** and complete them


/* ------------------------------------------------------
 Your name: **
 Compiler: g++

 Program Description: **

 -------------------------------------------------------------------- */

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

// rule struct type is declared
struct rule
{
  vector<string> conditions;   // multiple conditions
  string conclusion;           // one conclusion
};

// ** add readRules here to read in rules.txt into the array and 
// give numRules by reference (from the Lab)
// Purpose of the function: **
// What the parameters are for: **



// ** add displayRules here to display what is in the array
// make sure it is easy to read and understand (from the Lab)
// Purpose of the function: **
// What the parameters are for: **


// ** write isTrue here to see if a given rule has all true conditions
// Purpose of the function: **
// What the parameters are for: **


// The driver for using rules
int main()
{ rule Rules[10];
  int numRules; // how many rules were stored in Rules
  readRules(Rules, numRules);  // both arguments will be set in the function
  displayRules(Rules, numRules);
  // ** do the required HW1 additions here and provide good inline comments



}

