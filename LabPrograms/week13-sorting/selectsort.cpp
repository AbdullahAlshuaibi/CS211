// CS211 Sorting Lab 1 - Yoshii

// Your name: **

#include<iostream>
using namespace std;


void selectsort(int L[], int N)
{
  // ** complete based on purple lines from Notes-13
}


int main()
{
  int myElements[10];
  int size;
  
  cout << "How many elements? (<=10): ";
  cin >> size;

  for (int i = 0; i < size; i++)
    {
      cout << "Element:";
      cin >> myElements[i];
    }

  // ** call selectionsort here with myElements and size

  cout << "Sorted List" << endl;
  for (int i = 0; i < size; i++)
    {
      cout << myElements[i] << " ";
    }
  cout << endl;
} 
