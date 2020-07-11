// CS211 Lab : Header file for student - by R. Yoshii

#include<string>
using namespace std;

class student
{
 private:
  // Data Members making up each student object (hidden from the client)
  string student_name;
  string student_major;
  int    student_grade_level; // ignored for now

 public:
  // Member Functions that can operate on an object (& its parts)
  // Note that the comments do not reveal data memebers - abstract
  student();    // constructor
  string getname();       // to give access to the name
  void   setname(string); // to change the name; provide the name as argument
  string getmajor();      // to give access to the major    
  void   setmajor(string); // to change the major; provide the major as argument
  ~student();   // destructor
};   // semicolon is important
