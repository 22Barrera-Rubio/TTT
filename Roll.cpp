#include <iostream>
#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// note: need to include dependencies for each individual file
int entered;

int dicer;
/* 
rolls an input number of dice, then adds the dice together and displays the total.
This should be a different tool than a roll and parser , which would operate by asking for the number of dice, faces and the dice to start counting from before rolling ( same code as this one) and adding up the totals of every dice ( how many sixes, sevens, eights , ect)
This specific one is basically done
*/

int BaseRoll() {
  for (int i = 0; i < 1;){  
  
  cout << endl;
  cout << ":::::::";
  cout << endl;
  cout << "Enter number of dice faces\n";
  cin >> entered;
  if (entered >= 50000){
  cout << "too much  ";
    return 0;
  }
  if (entered <= 0){
    int main();
    return 0;
  } 
  else{

  
 cout << "How many dice?\n";
  }
  int dicecount{};
  int totalnum{};
  cin >> dicecount;
  if (dicecount >= 50000){
    cout << "too much   ";
    return 0;
  }
  else
  srand(time(NULL));
  for (int z = 0; z < dicecount; z++)
  {
    cout << "You rolled: ";
    cout <<endl;
  
  dicer = rand() % entered + 1;
  totalnum = totalnum + dicer;
  cout << "                       " << dicer <<endl;
  
  }
  cout <<endl;
  cout << "Dice total is : ";
  cout << totalnum  << endl;
  
  
  }
} 



