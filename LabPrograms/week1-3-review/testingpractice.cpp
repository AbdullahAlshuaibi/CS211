// CS211 Yoshii Testing Lab - with Scores array

// INSTRUCTION:
// Test all functions throughly by writing a test client (main).
// Must write down all planned test cases first on a sheet of paper.
// Then test thoroughly based on it.

// Your name: ** Abdullah Alshuaibi

#include<iostream>
#include<string>
using namespace std;

// gets data from the user to fill S until -1 is entered
int getData(int S[], int size)
{  int sc, i;
   for (i = 0; i < size ; i++)
    {
      cout << "Enter a score or -1: ";
      cin >> sc;
      if (sc > -1) S[i] = sc; 
      else break;
    }
  return i; // how many scores
}

// displays all scores
void displayAll(int S[], int size)
{  for (int i = 0; i < size ; i++)
    {
      cout << S[i] << endl;
    }
}

// searches through S looking for perfect and return how many
int search(int S[], int size, int perfect)
{ int c = 0;
  for (int i = 0 ; i < size ; i++)
    {
      if (S[i] == perfect) c++;
    }
  return c;
}

// finds the total
int total(int S[], int size)
{ int sum = 0;
  for (int i = 0 ; i < size ; i++)
    {
      sum = sum + S[i];

    }
  return sum;
}


// The test-client to test each function repeatedly
int main()
{
  int scores[5]; // scores array can hold up to 5
  int numscrs = 0; // how many scores were read
  int choice;  // user menu choice
  // ** add more variables here as needed
  int size=5;
  // ** do the following:
  int p=100; //perfect scores
  int perfNum= search(scores, size, p);
  int totalS= total(scores, size);
// ** display a menu
  do
    {
      cout<<"1: get Data"<<endl<<"2: Display scores"<<endl<<"3: Find how many perfect scores"<<endl<<"4: Find the total score"<<endl<<"-1: end program"<<endl;
  
      cout<<endl<<"Enter a choice: ";
      cin>>choice;
      
      switch(choice)     // ** write switch for different cases to test each of the 4 functions
	{
	case 1: getData(scores, size)<<endl;
	  break;          //  and display results
	case 2:  displayAll(scores, size)<<endl;
	  break; 
	case 3:  cout<< perfNum <<endl;
	  break;
	case 4:  cout<< totalS <<endl;
	  break;
	case -1: return 0;
	default: cout<< "invalid choice"<<endl;
	}
    }
  while(choice != -1);
    
        // in an easy to understand way.
     // ** bad menu choice generates an error message
}  // ** while choice is not to quit

// end of main
