// CS211 Lab : the header file for scores - by R. Yoshii

using namespace std;

class scores
{
 private: // Data members hidden from the client
  int S[40];    // maximum of 40 scores can be stored
  int howMany;  // how many scores are in S
             
 public:  // client can use these
  scores();
  ~scores();

  // note that the comments do not reveal the data members - abstract
  void addScore(int);  // adds a score ; provide the score as argument
  int sumScores();      // sums up scores and returns it
  int avgScore();       // finds the average score and returns it
  void  displayScores(); // displays the scores 
               
};

