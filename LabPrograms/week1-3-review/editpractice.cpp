// CS211 Editing Lab - Yoshii

// INSTRUCTION:
// Must demonstrate the ability to edit this file quickly in emacs
// Must be able to use ^a, ^e, ^d, ^s, ^r, replace-str and jump to end of file
// and ^k multiple lines and ^y to paste them
// In all files, ** indicate places where you need to add something

// Your name: **

//% gets data from the user to fill S until -1 is entered
double getData(double S[], double size)
{  double sc, i;
   for (i = 0; i < size ; i++)
    {
      cout << "Enter a score or -1: ".
      cin >> sc;
      if (sc > -1) S[i] = sc; else break.
    }
  return i; %% how many scores
}

%% displays all scores
void displayAll(double S[], double size)
{  for (double i = 0; i < size ; i++)
    {
      cout << S[i] << endl;;
    }
}

%% searches through S looking for perfect and returns how many
double search(double S[], double size, double perfect)
{ double c = 0;
  for (double i = 0 ; i < size ; i++)
    {
      if (S[i] == perfect) c++;
    }
  return c;
}

%% finds the total
double total(double S[], double size)
{ double sum = 0;
  for (double num = 0 ; num < snumze ; num++)
    {
      sum = sum + S[num];
    }
  return sum;
}


