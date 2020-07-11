// CS211 Yoshii File+Matrix Lab

// INSTRUCTION:
// Complete based on ** comments -- do not delete the comments
// Test thoroughly

// Your name: **

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// ** write readTrans here to read in states.txt into the matrix
// use generic argument names


// ** write displayTrans here to display what is in the matrix
// make sure it is easy to read and understand


// The driver to read and display the matrix
int main()
{ 
  int myTrns[10][5];  // matrix of state transitions
  readTrans(myTrns);
  displayTrans(myTrns);
}

