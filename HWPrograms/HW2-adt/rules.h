// CS211 HW2 Rule-Based System 

/* ---------------------------------------------
 Your name: **
 Header File for HW2 rules class
 Compiler: g++

------------------------------------------------ */
#include<string>
#include<vector>
using namespace std;

// define struct rule 
struct rule
{
  vector<string> conditions;  // many conditions
  string  conclusion;         // one conclusion
};

//** add isTrue in the appripriate place below
class  rules
{
 private: // data members hidden from the client
    rule  R[10];
    int   numRules;  // the number of stored rules in R

 public: // available to the client
  void readRules();          // read rules from the input file
  void displayRules();       // display rules
  // Given the vector of conditions, returns all conclusions
  **???    checkRules(vector<string>); 

};   
// don't forget the semicolon at the end.


