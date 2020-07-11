// CS211 Yoshii File+Array of Struct Lab

// INSTRUCTION:
// Complete based on ** comments -- do not delete the comments
// Test thoroughly

// Your name: **

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

// struct type rule is declared
struct rule
{
  vector<string> conditions;  // multiple conditions
  string conclusion;  // one conclusion
};

// ** write readRules here to read in rules.txt into the array and gives 
// back the number of rules by reference (use generic argument names)

// ** write displayRules here to display what is in the array
// make sure it is easy to read and understand (use generic argument names)


// ** the driver to read and display rules
int main()
{
  rule myRules[10];
  int numRules; // how many rules were stored in Rules
  readRules(myRules, numRules);  // both arguments will be set in the function
  displayRules(myRules, numRules);
}

