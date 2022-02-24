// this one should act like Roll but parses it or whatever and adds how many are above 
// an input threshold. 
#include <iostream>
#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int enteredz;

int dicerz;

int thresh;

//below is mostly the same as BaseRoll

int PRoll() {
  for (int i = 0; i < 1;){  
  


  cout << endl;
  cout << ":::::::";
  cout << endl;
  cout << "Enter threshold (IE 6 would lead to 6 and above)\n";
  cin >> thresh;

  cout << "Enter number of dice faces\n";
  cin >> enteredz;
  if (enteredz >= 50000){
  cout << "too much  ";
    return 0;
  }
  if (enteredz <= 0){
   //int main();
    return 0;
  } 
  else{

  
 cout << "How many dice?\n";
  }
  int dicecountz{};
  int tnm{}; //total num met
  cin >> dicecountz;
  if (dicecountz >= 50000){
    cout << "too much   ";
    return 0;
  }

else
  srand(time(NULL));
  for (int z = 0; z < dicecountz; z++)
  {
    cout << "You rolled: ";
    cout <<endl;
  
  dicerz = rand() % enteredz + 1;// dicer does random function, then modulo by enter //+ 1.  The +1 sets the minimum to prevent 0 die rolls and the modulo
  // sets the maximum they can display to entered ( the face count)
 // totalnum = totalnum + dicerz;
  if (dicerz >= thresh){
    cout << "                       " << dicerz << "    Above thresh" <<endl;
    tnm = tnm + 1;
  }else{
  cout << "                       " << dicerz <<endl;
  
  }
  }
  cout <<endl;

  cout << tnm << endl;
 // cout << "Dice total is : ";
  //cout << totalnum  << endl;
  
  
  }

  }
